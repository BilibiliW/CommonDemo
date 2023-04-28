/**
  ******************************************************************************
  * @file 
  * @brief 
  * @author Moon
  * @version V1.0.0
  * @date 2022/05/27
  ******************************************************************************
  */
#include "A_aclass_protocol.h"
#if 	A_PROTOCOL_USE_TABLE == 1
/* Includes ------------------------------------------------------------------*/
#include "A_para.h"
#include <string.h>
#include "A_aclass_table.h"


/* Private defines -----------------------------------------------------------*/

#if         A_PROTOCOL_USE_RTOS == 0
    #include "public_heap4.h"
    #define     ACLASS_TAB_MALLOC      NoRtos_Malloc
    #define     ACLASS_TAB_FREE        NoRtos_Free
#elif       A_PROTOCOL_USE_RTOS == 1
	#include "FreeRTOS.h"
    #define     ACLASS_TAB_MALLOC      pvPortMalloc
    #define     ACLASS_TAB_FREE        vPortFree
#endif

/* Private Struct  -----------------------------------------------------------*/

#define ENUM_CODE_CASE_PTL(x, y) \
    case x:                  \
        return (y);
/* Private enum    -----------------------------------------------------------*/

/* Private Variable  ---------------------------------------------------------*/
//Pointer

//Array

//Const
typedef struct 
{
    uint8_t     main_addr;  //主地址
    uint16_t    info_num;   //协议数量
    A_protocl_t *pro;       //协议内容
	slist_t 	list;
} A_table_info_t;

static slist_t g_pro_item_list = 
{
	.next = NULL,
};
/* Private function prototypes -----------------------------------------------*/
static int data_cmp(A_DATA_TYPE_e data_type, const void *value, const void *data_v);
static ack_packet_t *A_pro_tab_callback(user_packet_t *user, void *param);

/***********************************************************************************
 * @brief 数据类型长度转换
 * @ex:
 * @par 数据类型
 * @retval 长度
 *
 **********************************************************************************/
static uint8_t TypeSize_TLV(A_DATA_TYPE_e type)
{
	switch (type)
	{
		ENUM_CODE_CASE_PTL(TLV_BOOL, 1)
		ENUM_CODE_CASE_PTL(TLV_INT8, 1)
		ENUM_CODE_CASE_PTL(TLV_UINT8, 1)
		ENUM_CODE_CASE_PTL(TLV_INT16, 2)
		ENUM_CODE_CASE_PTL(TLV_UINT16, 2)
		ENUM_CODE_CASE_PTL(TLV_INT32, 4)
		ENUM_CODE_CASE_PTL(TLV_UINT32, 4)
		ENUM_CODE_CASE_PTL(TLV_INT64, 8)
		ENUM_CODE_CASE_PTL(TLV_UINT64, 8)
		ENUM_CODE_CASE_PTL(TLV_FLOAT, 4)
		ENUM_CODE_CASE_PTL(TLV_DOUBLE, 8)
		ENUM_CODE_CASE_PTL(TLV_STRING, 0xFF)
		ENUM_CODE_CASE_PTL(TLV_LIST, 0xFF)
	}
	return 0;
}

#define PTL_INITDATA_CMP(data_type)                                 \
	if (*(data_type *)value == *(data_type *)data_v)                \
		return 0;                                                   \
	else                                                            \
		return *(data_type *)value > *(data_type *)data_v ? 1 : -1;
/***********************************************************************************
 * @brief string比对函数
 * ex:
 * @par
 * None
 * @par
 * None
 * @retval 1：value > data_v  -1:value < data_v  0:value = data_v
 **********************************************************************************/
static int data_cmp(A_DATA_TYPE_e data_type, const void *value, const void *data_v)
{
	float f_master = 0;
	float f_slave = 0;
	double d_master = 0;
	double d_slave = 0;

	if (value == NULL || data_v == NULL)
		return -1;

	switch (data_type)
	{
	case TLV_INT8:
		PTL_INITDATA_CMP(int8_t)
	case TLV_UINT8:
		PTL_INITDATA_CMP(uint8_t)
	case TLV_INT16:
		PTL_INITDATA_CMP(int16_t)
	case TLV_UINT16:
		PTL_INITDATA_CMP(uint16_t)
	case TLV_INT32:
		PTL_INITDATA_CMP(int32_t)
	case TLV_UINT32:
		PTL_INITDATA_CMP(uint32_t)
	case TLV_INT64:
		PTL_INITDATA_CMP(int64_t)
	case TLV_UINT64:
		PTL_INITDATA_CMP(uint64_t)
	case TLV_FLOAT:
		if (memcmp(value, data_v, sizeof(float)) == 0)
		{
			return 0;
		}
		else
		{
			memcpy(&f_master, value, sizeof(float));
			memcpy(&f_slave, data_v, sizeof(float));
			return f_master > f_slave ? 1 : -1;
		}
	case TLV_DOUBLE:
		if (memcmp(value, data_v, sizeof(double)) == 0)
		{
			return 0;
		}
		else
		{
			memcpy(&d_master, value, sizeof(double));
			memcpy(&d_slave, data_v, sizeof(double));
			return d_master > d_slave ? 1 : -1;
		}
	case TLV_STRING:
		return strcmp((char *)value, data_v);
	default:
		break;
	}
	return -1;
}

/***********************************************************************************
 * @brief A类协议协议表回调函数
 * ex:
 * @par
 * None
 * @par
 * None
 * @retval 
 **********************************************************************************/
static ack_packet_t *A_pro_tab_callback(user_packet_t *user, void *param)
{
	uint8_t type_len = 0;
	ack_packet_t *ack = NULL;
    A_protocl_t *p_tem = NULL;
    const A_data_info_t *d_tem = NULL;
    uint16_t j = 0, k = 0, pr = 0;

	if (param == NULL)
		goto NO_MAIN_ORDR;

	p_tem = (A_protocl_t *)param;
	if(user->style == CMD_SET)    //设置
    {
		if (W_CHARACTER(p_tem->per) == 0)
			goto ERRPR_TYPE_ORDER;

		if (user->len != p_tem->data_len & p_tem->len_type == A_LIMIT)
			goto ERROR_NUM_OF_PAR;

		for (j = 0; j < p_tem->info_len; j++)
		{
			d_tem = &p_tem->info[j];
			// if (d_tem->D_typ == TLV_LIST)
			// 	break;

			type_len = TypeSize_TLV(d_tem->D_typ);
			if ((d_tem->macro_len) != 0 &&
				(d_tem->D_typ != TLV_STRING) &&
				(d_tem->D_typ != TLV_LIST)) // string,list类型不具备宏功能
			{
				for (k = 0; k < d_tem->macro_len; k++)
				{
					if (data_cmp(d_tem->D_typ, (void *)&user->data[pr],
								 &((char *)d_tem->macro)[type_len * k]) == 0)
					{
						break;
					}
				}
				if (k >= d_tem->macro_len)
					goto ERROR_OF_PAR;
			}
			if (d_tem->up_lim_val != NULL &&
				(d_tem->D_typ != TLV_STRING) &&
				(d_tem->D_typ != TLV_LIST)) // string,list上下限功能
			{
				if (data_cmp(d_tem->D_typ, (void *)&user->data[pr], d_tem->up_lim_val) == 1)
					goto ERROR_UPLIM_OF_PAR;
			}
			if (d_tem->dow_lim_val != NULL &&
				(d_tem->D_typ != TLV_STRING) &&
				(d_tem->D_typ != TLV_LIST)) // string,list上下限功能
			{
				if (data_cmp(d_tem->D_typ, (void *)&user->data[pr], d_tem->dow_lim_val) == -1)
					goto ERROR_DOWLIM_OF_PAR;
			}
			
			if ((d_tem->s_area != NULL) && (d_tem->s_name != NULL))
			{
				Apara_Write(d_tem->s_name, &user->data[pr], d_tem->datalen);
			}
			pr += d_tem->datalen;
		}
		ack = Ack_Malloc(1);
    	if (p_tem->setcall != NULL)
		{
			int8_t set_core = 0;
			set_core = p_tem->setcall(p_tem, user->data, user->len, &ack->system_reset_flag);
			if (set_core < 0) //< 0 不进行回复
			{
				ack = Ack_Malloc(0);
			}
			else
			{
				ack->data[0] = set_core;
			}
		}
        else
		{
			ack->data[0] = 0x00;
		}
    }
    else if(user->style == CMD_READ)       //读取
    {
		if (R_CHARACTER(p_tem->per) == 0)
			goto ERRPR_TYPE_ORDER;

        ack = Ack_Malloc(p_tem->data_len);
		for (j = 0; j < p_tem->info_len; j++)
		{
			d_tem = &p_tem->info[j];
			if (d_tem->s_area != NULL && d_tem->s_name)
			{
				Apara_Read(d_tem->s_name, &ack->data[pr], d_tem->datalen);
			}
			if (d_tem->D_typ == TLV_STRING)
			{
				pr += strlen((char *)&ack->data[pr]) + 1;
			}
			else
			{
				pr += d_tem->datalen;
			}
		}
		ack->len = pr;
		if (p_tem->getcall != NULL)
		{
			ack->len = p_tem->getcall(p_tem, ack->data);
		}
    }
	return ack;

ERRPR_TYPE_ORDER:
	ack = Ack_Malloc(1);
	ack->data[0] = ORDER_TYPE_ERROR;
	#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	CLASS_LOG_I("A class error, no main addr\n");
	#endif
	return ack;
NO_MAIN_ORDR:
	ack = Ack_Malloc(1);
	ack->data[0] = NO_ORDER;
	#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	CLASS_LOG_I("A class error, no main addr\n");
	#endif
	return ack;
ERROR_NUM_OF_PAR:
	ack = Ack_Malloc(1);
	ack->data[0] = PARAM_LIMIT_ERROR;
	#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	CLASS_LOG_I("A class error, num of param\n");
	#endif
	return ack;
ERROR_UPLIM_OF_PAR:
	ack = Ack_Malloc(1);
	ack->data[0] = PARAM_LIMIT_ERROR;
	#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	CLASS_LOG_I("A class error, param uplimit\n");
	#endif
	return ack;
ERROR_DOWLIM_OF_PAR:
	ack = Ack_Malloc(1);
	ack->data[0] = PARAM_LIMIT_ERROR;
	#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	CLASS_LOG_I("A class error, param dowlimit\n");
	#endif
	return ack;
ERROR_OF_PAR:
	ack = Ack_Malloc(1);
	ack->data[0] = PARAM_LIMIT_ERROR;
	#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	CLASS_LOG_I("A class error, param error\n");
	#endif
	return ack;
}

/***********************************************************************************
 * @brief  A类协议协议表注册初始化
 * ex:
 * @par    mast_addr 	主地址
 * @par    pro_num   	协议数量
 * @par    pro 			协议地址
 * @retval <0			失败
 **********************************************************************************/
int Aclass_table_register(uint8_t mast_addr, uint16_t pro_num, A_protocl_t *pro)
{
	uint16_t i = 0;
	A_protocl_t *p_tem = NULL;

	if (pro == NULL)
		return -1;

	A_table_info_t *a_table = ACLASS_TAB_MALLOC(sizeof(A_table_info_t));
	if (a_table == NULL)
	{
		return -1;
	}

	a_table->main_addr = mast_addr;
	a_table->info_num = pro_num;
	a_table->pro = pro;
	slist_append(&g_pro_item_list, &a_table->list);

	for (i = 0; i < pro_num; i++)
	{
		p_tem = &pro[i];
		if (A_CHARACTER(p_tem->per))
		{
			if (p_tem != NULL)
			{
				Aclass_Send_Register(p_tem->name,
									 A_PROTOCOL_MAST_NODE_NAME,
									 FAST_HEAD,
									 BURST_SEND, mast_addr, p_tem->sub_addr, 0);
			}
		}
		Aclass_Cmd_Register(mast_addr, p_tem->sub_addr, A_pro_tab_callback, (void *)p_tem);
	}
	return 0;
}

#endif

/******************* (C) COPYRIGHT 2022 CIQTEK MOON *****END OF FILE****/
