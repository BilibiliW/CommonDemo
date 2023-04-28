/**
  ******************************************************************************
  * @file 
  * @brief 
  * @author Moon
  * @version V1.0.0
  * @date 2022/11/18
  ******************************************************************************
  */
#ifndef A_ACLASS_TABHLE_H
#define A_ACLASS_TABHLE_H  

#include <stdint.h>
#include "A_para.h"
/* Public defines -----------------------------------------------------------*/
enum
{
	SET_SUCCESS = 0,		//操作正确
	ORDER_TYPE_ERROR = 1,	//指令类型错误
	NO_ORDER = 2,			//未找到主子命令
	CRC_ERROR = 3,			//CRC校验错误
	JOINT_error = 4,		//拼接位错误
	PARAM_LIMIT_ERROR = 5,	//参数超范围
};

typedef enum
{
	A_R = 1,		//只读
	A_W = 2,		//只写
	A_RW = 3,		//可读可写
	A_A = 4,		//只主动上报
	A_RA = 5,		//可读可主动上报
	A_WA = 6,		//可写可主动上报
	A_RWA = 7,		//可写可主动上报
} A_PERMISSION_e;

#define R_CHARACTER(val)	(val & A_R)				//读属性检查
#define W_CHARACTER(val)	(val & A_W)				//写属性检查
#define A_CHARACTER(val)	(val & A_A)				//主动上报属性检查

typedef enum
{
	TLV_BOOL = TYPE_bool,
	TLV_UINT8 = TYPE_uint8,
	TLV_INT8 = TYPE_int8,
	TLV_UINT16 = TYPE_uint16,
	TLV_INT16 = TYPE_int16,
	TLV_UINT32 = TYPE_uint32,
	TLV_INT32 = TYPE_int32,
	TLV_FLOAT = TYPE_float,
	TLV_DOUBLE = TYPE_double,
	TLV_STRING,							//顺序不可变更
	TLV_UINT64,
	TLV_INT64,
	
	TLV_LIST,
} A_DATA_TYPE_e;

#define		A_REBOOT	1
/* Public Struct  -----------------------------------------------------------*/
typedef struct 
{
	const char			*s_area;			//存储区域
	const char			*s_name;			//存储参数名称
	const uint16_t	 	datalen; 			//数据长度(string、list 类型，填写最大长度)
	const A_DATA_TYPE_e D_typ;				//数据类型

	const void			*up_lim_val;		//上限值
	const void			*dow_lim_val;		//下限值
	const void			*macro;				//宏定义
	const uint16_t		macro_len;			//宏数量
	const void			*default_data;		//默认值
} A_data_info_t;

typedef enum
{
	A_LIMIT,	//长度有限
	A_INFINITE,	//长度无限
} LEN_TYPE_e;

typedef struct 
{
	const char				*name;		//名称(主动上报有意义)
	const uint8_t 			mast_addr;	//主地址
	const uint8_t 			sub_addr;	//从地址
	const A_PERMISSION_e 	per;		//权限
	const LEN_TYPE_e		len_type;	//数据长度类型
	const uint16_t 			data_len;	//数据长度（A_LIMIT：数据长度；A_INFINITE：最大数据长度）
	const A_data_info_t		*info;		//数据信息
	const uint16_t			info_len;	//数据信息长度

	/*写回调，p:处理表所在位置指针 reboot:赋值1重启; 返回：0-成功 >0-失败码 <0不回复*/
	int8_t 					(*setcall)(const void *p, uint8_t *data, uint16_t len, uint8_t *reboot);
	/*读回调，p:处理表所在位置指针 返回：数据长度*/
	uint16_t 				(*getcall)(const void *p, uint8_t *data);					
} A_protocl_t;

/* Public enum    -----------------------------------------------------------*/


/* Public Variable  ---------------------------------------------------------*/
//Pointer

//Array

//Const

/* Pubilc function prototypes -----------------------------------------------*/

int Aclass_table_register(uint8_t mast_addr, uint16_t pro_num, A_protocl_t *pro);
#endif /* _ _H */


/******************* (C) COPYRIGHT 2018 CIQTEK Samuel *****END OF FILE****/

