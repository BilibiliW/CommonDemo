/*
 * A_aclass_protocol.c
 *
 *  Created on: September 24, 2021
 *      Author: taoye
 */


/* Includes ------------------------------------------------------------------*/
#include "A_aclass_protocol.h"

/* freertos include*/
#if     A_PROTOCOL_USE_RTOS == 1
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"
#endif

#if         A_PROTOCOL_USE_RTOS == 0
    #include "public_heap4.h"
    #define     ACLASS_MALLOC      NoRtos_Malloc
    #define     ACLASS_FREE        NoRtos_Free
#elif       A_PROTOCOL_USE_RTOS == 1
    #define     ACLASS_MALLOC      pvPortMalloc
    #define     ACLASS_FREE        vPortFree
#endif

#if A_PROTOCOL_USE_SHELL == 1
static uint8_t g_shell_type = 0; // shell开关
static int Aclass_shell(uint8_t argc, char **argv);
#endif
/* Private defines -----------------------------------------------------------*/
#define 	ENUM_CODE_CASE(x)   	case x: return(#x);

#define     PROCESS_FIRST_LEN       5
#define     PROCESS_CACHE_LEN       128

#define condition_traverse(list_head, struct_type, struct_p, condition)         \
    list_node = NULL;                                                           \
    slist_for_each(list_node, list_head){                                       \
    	struct_p = slist_entry(list_node, struct_type, list);                   \
    	condition{                                                              \
    		break;                                                              \
    	}                                                                       \
    }                                                                           \

/* Public enum    -----------------------------------------------------------*/
typedef enum
{
	NORMAL_STATUS,
	I_Not_enough_data,
	W_Frame_head_error,
	W_Frame_data_excessive,
	E_Frame_lenth_error,
	E_Frame_malloc_failed,
	I_Frame_data_not_enough,

	I_Forward_to_parent_node,
	I_Forward_to_child_node,
	E_Check_end_of_frame_error,

	I_Iap_process_complete,

	E_Userdata_malloc_failed,
	E_Userdata_comprehensive_error,
	E_Userdata_style_error,

	W_Callback_could_not_find,
    W_SendAck_could_not_find,
	W_Callback_subcontract_not_completed,
}s_code_e;

/* Private Struct    ---------------------------------------------------------------*/

typedef struct {
	uint32_t            hard_name;
	Hardsend_callback   interface;
    Hardsend_flush      flush_interface;
	slist_t 	        list;
} hard_item_t;

typedef struct {
    uint8_t         maincmd;
    uint8_t         subcmd;
    Cmd_callback    callback;
    void            *param;
    slist_t	        list;
} cmd_item_t;

typedef struct {
	uint32_t        send_name;
	cmd_head_e      head;
	uint8_t         obj_softid;
	cmd_style_e     style;
    uint8_t         maincmd;
    uint8_t         subcmd;
    uint8_t         sp_byte;
    recv_ack_t      recv_ack;
    slist_t	        list;
} send_item_t;

#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
typedef struct {
    uint32_t    name_crc32;
    char        name_str[A_PROTOCOL_NAME_MAX];
    slist_t	    list;
} string_item_t;
#endif

typedef struct {

#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	char *          name;
#endif
    node_item_t *   node;
} cmd_msg_t;

#if         A_PROTOCOL_USE_IAP != 0
    extern int Aclass_iap_protocol(frame_data_t *frame, node_item_t *node);
#endif

/* Private Variable  ---------------------------------------------------------------*/
#if     A_PROTOCOL_USE_RTOS == 1
static QueueHandle_t 		commandQueue;
static SemaphoreHandle_t    commandMutex;
#elif   A_PROTOCOL_USE_RTOS == 0
static queue_t       commandQueue;
#endif
static uint8_t              local_softid;
static cmd_msg_t            msg_globel;
static uint8_t              process_buf[PROCESS_CACHE_LEN];
static ack_packet_t *		ackdata;
static int32_t 				frame_dymem_cnt=0;
static int32_t 				userdata_dymem_cnt=0;

static slist_t 				hard_item_list;
static slist_t 				node_item_list;
static slist_t 				send_item_list;
static slist_t 				cmd_item_list;

#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
static slist_t 				string_item_list;
#endif


/***********************************************************************************
 * @brief 	version number query
 * @ex:
 * @par		
 * None
 * @retval str
 **********************************************************************************/
char *Aclass_Version(void)
{
    return ACLASS_VERSION;
}
/***********************************************************************************
 * @brief 	Convert status code to string
 * @ex:
 * @par		s_code_e
 * @retval str
 **********************************************************************************/
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
static char *Scode_To_Str(s_code_e s_code)
{
    switch (s_code)
    {
    	ENUM_CODE_CASE(NORMAL_STATUS)
		ENUM_CODE_CASE(I_Not_enough_data)
		ENUM_CODE_CASE(W_Frame_head_error)
		ENUM_CODE_CASE(W_Frame_data_excessive)
		ENUM_CODE_CASE(E_Frame_lenth_error)
		ENUM_CODE_CASE(E_Frame_malloc_failed)
		ENUM_CODE_CASE(I_Frame_data_not_enough)

		ENUM_CODE_CASE(I_Forward_to_parent_node)
		ENUM_CODE_CASE(I_Forward_to_child_node)
		ENUM_CODE_CASE(E_Check_end_of_frame_error)

		ENUM_CODE_CASE(I_Iap_process_complete)

		ENUM_CODE_CASE(E_Userdata_malloc_failed)
		ENUM_CODE_CASE(E_Userdata_comprehensive_error)
		ENUM_CODE_CASE(E_Userdata_style_error)

		ENUM_CODE_CASE(W_Callback_could_not_find)
        ENUM_CODE_CASE(W_SendAck_could_not_find)
		ENUM_CODE_CASE(W_Callback_subcontract_not_completed)
    }
    return "Unknown information";
}
#endif
/***********************************************************************************
 * @brief 		Frame data malloc
 * @ex:
 * @par
 * @retval void None
 **********************************************************************************/
static void Frame_malloc(frame_data_t *frame)
{
	frame->data = ACLASS_MALLOC(frame->total);
	(frame->data != NULL) ? (frame_dymem_cnt += frame->total) : (frame_dymem_cnt += 0);
}
/***********************************************************************************
 * @brief 		Clear the received frame data buffer
 * @ex:
 * @par
 * @retval void None
 **********************************************************************************/
static void Clean_Frame(frame_data_t *frame)
{
    ACLASS_FREE((void *)frame->data);
    frame_dymem_cnt -= frame->total;
    frame->sum = 0;
    frame->total = 0;
    frame->data = NULL;
}
/***********************************************************************************
 * @brief 		Userdata data malloc
 * @ex:
 * @par
 * @retval void None
 **********************************************************************************/
static void Userdata_malloc(user_packet_t *userdata)
{
	userdata->data = ACLASS_MALLOC(userdata->malloc_len);
	(userdata->data != NULL) ? (userdata_dymem_cnt += userdata->malloc_len) : (userdata_dymem_cnt += 0);
}
/***********************************************************************************
 * @brief 		Clear the user data after packaging
 * @ex:
 * @par
 * @retval void None
 **********************************************************************************/
static void Clean_Userdata(user_packet_t *userdata)
{
    ACLASS_FREE((void *)userdata->data);
    userdata_dymem_cnt -= userdata->malloc_len;
    userdata->malloc_len = 0;
    userdata->len = 0;
    userdata->splice_total = 0;
    userdata->splice_protion = 0;
    userdata->data = NULL;
}
/***********************************************************************************
 * @brief 		Return pointer to static memory
 * @ex:      Frequently used in callback functions to reduce s_code duplication
 * @par     len : Requested memory length
 * @retval Pointer to static memory
 **********************************************************************************/
inline ack_packet_t * Ack_Malloc(uint32_t len)
{
	if(len > A_PROTOCOL_ACKDATA_MAX){
		return NULL;
	}
	ackdata->len = len;
	ackdata->system_reset_flag = 0;
    ackdata->reply_error = REPLY_NO_ERR;

	return ackdata;
}
/***********************************************************************************
 * @brief 		Get the data sending interface of the node
 * @ex:
 * @par			node
 * @retval 		Hardsend_callback
 **********************************************************************************/
Hardsend_callback Get_Node_Interface(node_item_t *node)
{
    slist_t     *list_node = NULL;
    hard_item_t *hard;

    if(node == NULL){
    	return NULL;
    }

    condition_traverse(&hard_item_list, hard_item_t, hard, 
    if(hard->hard_name == node->hard_name));

    if(list_node != NULL){
    	return hard->interface;
    }

    return NULL;
}
/***********************************************************************************
 * @brief 		Get the data sending flush of the node
 * ex:
 * @par			node
 * None
 * @retval 		Hardsend_callback
 **********************************************************************************/
Hardsend_flush Get_flush_interface(node_item_t *node)
{
    slist_t     *list_node = NULL;
    hard_item_t *hard;

    if(node == NULL){
    	return NULL;
    }

    condition_traverse(&hard_item_list, hard_item_t, hard, 
    if(hard->hard_name == node->hard_name));

    if(list_node != NULL){
    	return hard->flush_interface;
    }

    return NULL;
}
/***********************************************************************************
 * @brief 		Get node
 * @ex:			Find the pointer of the node according to the node type
 * 				and the node software address
 * @par			
 * @retval 		
 **********************************************************************************/
static node_item_t *Get_Node_Accord_Softid(node_type_e node_type, uint8_t softid)
{
    slist_t     *list_node = NULL;
    node_item_t *node;

	if(node_type == PARENT_NODE){

		list_node = slist_first(&node_item_list);
		node = slist_entry(list_node, node_item_t, list);
	}
	else if(node_type == CHILD_NODE){
        
        condition_traverse(&node_item_list, node_item_t, node,
        if(node->softid == softid));
	}

	if(list_node != NULL){
		return node;
	}
    return NULL;
}
/***********************************************************************************
 * @brief 		send data
 * @ex:			Send data to the corresponding node
 * @par			node
 * 				interface:Node's sending interface
 * 				data
 * 				len
 * @retval 		void
 **********************************************************************************/
void Interface_senddata(node_item_t *node, Hardsend_callback interface, void *data, uint32_t len)
{
#if     A_PROTOCOL_USE_RTOS == 1
	xSemaphoreTake( commandMutex, portMAX_DELAY );
#endif
    
	interface(node->phyaddr, (char *)data, len);
    
#if     A_PROTOCOL_USE_RTOS == 1
    xSemaphoreGive( commandMutex );
#endif
}

/***********************************************************************************
 * @brief 		Combined frame data
 * @ex:      Put the received original data into the frame structure,
 * 			and sub-package the data to combine
 * @par    
 * @retval  Status Code
 **********************************************************************************/
static s_code_e Frame_Combination(node_item_t *node)
{
    uint8_t *buf = process_buf;
    frame_data_t   *frame = &(node->frame);
    queue_t *queue = &(node->queue);
    uint32_t save_len,want_read_len,real_read_len;
    
    save_len = DataQueueGetLen(queue);

repeat:
    if(frame->total == 0){
    
        if(save_len < PROCESS_FIRST_LEN){
            return I_Not_enough_data;
        }
        
        DataQueueRead(queue, process_buf, PROCESS_FIRST_LEN);
        real_read_len = PROCESS_FIRST_LEN;
        
        if(buf[0] == PAPR_HEAD || buf[0] == HOST_HEAD){
            frame->total = buf[1] + 2;
        }
        else if(buf[0] == DATA_HEAD || buf[0] == FAST_HEAD){
            frame->total = (((unsigned int)buf[1]<<8) + buf[2]) + 3;
        }
        else if(buf[0] == IAP_HEAD){
            frame->total = (((unsigned int)buf[2]<<8) + buf[3]) + 4;
        }
        else{
            
            DataQueueClear(queue);
            Clean_Frame(frame);
            return W_Frame_head_error;
        }
        
        if(frame->total > A_PROTOCOL_RECIVE_MAX){
            
            Clean_Frame(frame);
            return W_Frame_data_excessive;
        }
        // Request memory
        Frame_malloc(frame);
        if(frame->data == NULL)
        {
            Clean_Frame(frame);
            return E_Frame_malloc_failed;
        }
    }
    else{

        (save_len + frame->sum) > frame->total ? (want_read_len = frame->total - frame->sum) : (want_read_len = save_len);

        want_read_len >= PROCESS_CACHE_LEN ? (real_read_len = PROCESS_CACHE_LEN) : (real_read_len = want_read_len);
        
        DataQueueRead(queue, process_buf, real_read_len);
    }
    
    // Copy to frame data
    memcpy((void *)(frame->data + frame->sum), (void *)(buf), real_read_len);
    frame->sum += real_read_len;
    
    save_len = DataQueueGetLen(queue);
    
    // Not received complete
    if(frame->sum < frame->total){
        
        if(save_len > 0){
            goto repeat;
        }
        else{
            return NORMAL_STATUS;
        }
    }
    // error
    else if(frame->sum > frame->total){
        
        DataQueueClear(queue);
        Clean_Frame(frame);
        return E_Frame_lenth_error;
    }
    // Received Successful
    else{
        
        if(save_len > 0){
            
            cmd_msg_t message = {
                .node = node,
            };
#if     A_PROTOCOL_USE_RTOS == 1
            xQueueSend(commandQueue, &message, 0);
#elif   A_PROTOCOL_USE_RTOS == 0
            DataQueueWrite(&commandQueue, (uint8_t *)&message, sizeof(cmd_msg_t));
#endif
        }
        return NORMAL_STATUS;
    }
}
/***********************************************************************************
 * @brief 		Command forwarding
 * @ex:      Determine the instruction type and target ID,
 * 			and forward the data that does not belong to this node.
 * 			The data belonging to this node will check the correctness of the data
 * @par    
 * @retval  Status Code
 **********************************************************************************/
static s_code_e Cmd_Forward(node_item_t *node)
{
    frame_data_t   *frame = &(node->frame);
    uint8_t targetid_index=0;
    Hardsend_callback interface;

    // Correctness check
    if(frame->sum < frame->total){
        return I_Frame_data_not_enough;
    }

    // The fast package is directly transferred to the parent node
    if(frame->data[0] == HOST_HEAD)
    {
    	node = Get_Node_Accord_Softid(PARENT_NODE, 0);
    	interface = Get_Node_Interface(node);
        Interface_senddata(node, interface, frame->data, frame->sum);
        Clean_Frame(frame);
        if(node->node_type == CHILD_NODE){
        	return I_Forward_to_child_node;
        }
        else{
        	return I_Forward_to_parent_node;
        }
    }
    else if(frame->data[0] == PAPR_HEAD){
    	targetid_index = 3;
    }
    else if(frame->data[0] == DATA_HEAD || frame->data[0] == FAST_HEAD){
    	targetid_index = 4;
    }
    else if(frame->data[0] == IAP_HEAD){
    	targetid_index = 7;
    }

    // The target ID is not a local ID
    if(targetid_index != 7 && frame->data[targetid_index] != local_softid)
    {
        // Query the routing table and forward to the matching child node
    	node = Get_Node_Accord_Softid(CHILD_NODE, frame->data[targetid_index]);
    	interface = Get_Node_Interface(node);
    	if(node == NULL){
            // Not a mounted child node, forward to the parent node
        	node = Get_Node_Accord_Softid(PARENT_NODE, 0);
        	interface = Get_Node_Interface(node);
        	Interface_senddata(node, interface, frame->data, frame->sum);
    	}
    	else{
    		Interface_senddata(node, interface, frame->data, frame->sum);
    	}
        Clean_Frame(frame);
        if(node->node_type == CHILD_NODE){
        	return I_Forward_to_child_node;
        }
        else{
        	return I_Forward_to_parent_node;
        }
    }

#if 	A_PROTOCOL_USE_IAP != 0
    if(frame->data[0] == IAP_HEAD){

    	Aclass_iap_protocol(frame, node);
    	Clean_Frame(frame);
    	return I_Iap_process_complete;
    }
#endif

#ifdef A_PROTOCOL_USE_CHECK_FRAME_END
    // A0 and A1 protocols need to do CRC check
    if(frame->data[0] == PAPR_HEAD || frame->data[0] == DATA_HEAD)
    {
        // CRC check failed
        if(Crc16_Rtu_Verification(frame->data, frame->sum, 0) == 0){
            Clean_Frame(frame);
            return E_Check_end_of_frame_error;
        }
    }
    // A3 protocols needs to determine the terminator
    else if(frame->data[0] == FAST_HEAD)
    {
        // Terminator check failed
        if( frame->data[frame->sum - 2] != 0x0d || frame->data[frame->sum - 1] != 0x0a){
            Clean_Frame(frame);
            return E_Check_end_of_frame_error;
        }
    }
#endif

    return NORMAL_STATUS;
}
/***********************************************************************************
 * @brief 		User data packaging
 * @ex:      Analyze the completely received original data,
 * 			extract the user data and pack it into the corresponding user_packet_t
 * @par    
 * @retval  Status Code
 **********************************************************************************/
static s_code_e UserDate_Pack(node_item_t *node)
{
    uint8_t lennum=0;
    uint8_t Spnum=0;
    uint32_t frame_data_len=0;

    frame_data_t   *frame = &(node->frame);
    user_packet_t *userdata = &(node->userdata);

    // Different protocol types have different formats
    switch(frame->data[0])
    {
        case(PAPR_HEAD):
            lennum = 1;
            Spnum  = 0;
            userdata->splice_total = 0;
            userdata->splice_protion = 0;
            break;
        case(DATA_HEAD):
            lennum = 2;
            Spnum  = 1;
            userdata->splice_total   = frame->data[6+lennum] >> 4;
            userdata->splice_protion = frame->data[6+lennum] & 0x0f;
            break;
        case(FAST_HEAD):
            lennum = 2;
            Spnum  = 1;
            userdata->splice_total   = frame->data[6+lennum] >> 4;
            userdata->splice_protion = frame->data[6+lennum] & 0x0f;
            break;
    }
    frame_data_len = frame->total - (8 + lennum + Spnum);

    // User data request buffer length is empty
    if(userdata->malloc_len == 0)
    {
        // If there is a splicing bit, the requested memory length is:
    	// the current packet data length multiplied by the total number of packets
    	// to ensure that it must be greater than the actual data length
        if(userdata->splice_total != 0){
            userdata->malloc_len = userdata->splice_total * frame_data_len;
        }
        else{
            userdata->malloc_len = frame_data_len;
        }
        // The user data length is not equal to 0 before applying, otherwise the application will fail
        if(userdata->malloc_len != 0){

        	Userdata_malloc(userdata);
        	if(userdata->data == NULL){
                Clean_Frame(frame);
                Clean_Userdata(userdata);

                return E_Userdata_malloc_failed;
        	}
        }
        memcpy(&userdata->data[userdata->len], &frame->data[6 + lennum + Spnum], frame_data_len);
    }
    else
    {
        /* 1.If the data pointer is empty
           2.If the main command of the current frame is different from the main command
           	 of the previous frame
           3.If The sub-commands of the current frame are different from the sub-commands
           	 of the previous frame
           4.If the original length plus the data length is greater than the requested length

			In any of the above cases, all caches must be cleared and exit*/
        if((userdata->data    == NULL) ||
           (userdata->maincmd != frame->data[lennum + 4]) ||
           (userdata->subcmd  != frame->data[lennum + 5]) ||
          ((userdata->len + frame_data_len) > userdata->malloc_len)){

            Clean_Frame(frame);
            Clean_Userdata(userdata);
            return E_Userdata_comprehensive_error;
        }
        else{
            memcpy(&userdata->data[userdata->len], &frame->data[6 + lennum + Spnum], frame_data_len);
        }
    }

    userdata->len     +=              frame_data_len;
    userdata->head     = (cmd_head_e) frame->data[0];
    userdata->sourceid =              frame->data[lennum + 1];
    userdata->style    = (cmd_style_e)frame->data[lennum + 3];
    userdata->maincmd  =              frame->data[lennum + 4];
    userdata->subcmd   =              frame->data[lennum + 5];

    Clean_Frame(frame);
    return NORMAL_STATUS;
}
/***********************************************************************************
 * @brief 		Callback function jump
 * @ex:      Jump into the corresponding callback function according to the
 * 			main command and sub-command and apply for reply data
 * @par     userdata : Packaged user data
 * @retval  Status Code
 **********************************************************************************/
static s_code_e Jump_CallBackFun(node_item_t *node)
{
    slist_t *       list_node   = NULL;
    cmd_item_t *    cmd;
    ack_packet_t  * ack 		= Ack_Malloc(1);
    user_packet_t * userdata    = &(node->userdata);

    /* If the total number of packages is equal to the number of sub-packages,
     * then jump into the corresponding callback function.
     * For protocols without splicing bits, both are 0 and still valid*/
    if(userdata->splice_total == userdata->splice_protion){

        // Find the corresponding registration command
        condition_traverse(&cmd_item_list, cmd_item_t, cmd,
        if((cmd->maincmd == userdata->maincmd) && (cmd->subcmd  == userdata->subcmd)));

    	if(list_node == NULL){
            ack->data[0] = CMD_NUM_ERR;
            return W_Callback_could_not_find;
    	}
    	else{
            /*the user will cover ack data in the callback function */
            ack = cmd->callback(userdata, cmd->param);
            return NORMAL_STATUS;
    	}
    }

    return W_Callback_subcontract_not_completed;
}
/***********************************************************************************
 * @brief 		Handles sending reply data
 * @ex:     Find the registered send data format and put the user data into it
 * @par		userdata : Packaged user data
 * @retval     Status Code	
 **********************************************************************************/
static s_code_e  SendACK_Process(user_packet_t *userdata)
{
    slist_t     *list_node = NULL;
	send_item_t *send;

    condition_traverse(&send_item_list, send_item_t, send,
    if( (send->head     == userdata->head)       &&
        (send->maincmd  == userdata->maincmd)    &&
        (send->subcmd   == userdata->subcmd))    );

    if(send == NULL){
        return W_SendAck_could_not_find;
    }

    send->recv_ack.style= userdata->style;
    memcpy(send->recv_ack.data, userdata->data, userdata->len);
    send->recv_ack.len  = userdata->len;

    return NORMAL_STATUS;
}
/***********************************************************************************
 * @brief 	A3 format fast data packet header packaging
 * @ex:
 * @par    info : Frame information
 * 		   user_len : User data length
           head_buff : Header cache
 * @retval  Header length
 **********************************************************************************/
uint8_t Fast_HeadTail_Org(send_item_t *info, uint32_t user_len, char *head_buff)
{
	uint8_t add=0;
	uint16_t Total_len;

	head_buff[add++] = info->head;

	Total_len = user_len + 8;
	head_buff[add++] = Total_len >> 8;
	head_buff[add++] = Total_len & 0x00ff;
	head_buff[add++] = local_softid;
	head_buff[add++] = info->obj_softid;
	head_buff[add++] = info->style;
	head_buff[add++] = info->maincmd;
    head_buff[add++] = info->subcmd;
	head_buff[add++] = info->sp_byte;

	return add;
}
/***********************************************************************************
 * @brief 	Frame data packing
 * @ex:
 * @par    info : Frame information
 * 		   reply : Send buffer
           data : User data
           len : User data length
 * @retval  Frame length
 **********************************************************************************/
static uint32_t Reply_Org(send_item_t *info, void *outdata, void *indata, uint32_t len)
{
	uint32_t Total_len = 0;
    uint32_t i = 0;
    uint32_t add = 0;

    char *Reply = (char *)outdata;
    char *data  = (char *)indata;
    // Header byte
	Reply[add++] = info->head;
    // Length byte
	switch(info->head)
	{
		case(PAPR_HEAD):
				Total_len = len + 7;
                Reply[add++] = Total_len;
				break;
		case(DATA_HEAD):
                Total_len = len + 8;
                Reply[add++] = Total_len >> 8;
                Reply[add++] = Total_len & 0x00ff;
				break;
		case(HOST_HEAD):
				Total_len = len + 5;
				Reply[add++] = Total_len;
				break;
		case(FAST_HEAD):
				Total_len = len + 8;
				Reply[add++] = Total_len >> 8;
				Reply[add++] = Total_len & 0x00ff;
				break;
		default:
			return 0;
	}
    // Source ID byte
    Reply[add++] = local_softid;
    if(info->head != HOST_HEAD){
        // Target ID byte
        Reply[add++] = info->obj_softid;
        // Target ID byte
        Reply[add++] = info->style;
        // Main instruction byte
    	Reply[add++] = info->maincmd;
    }
    // Subcommand byte
	Reply[add++] = info->subcmd;
    // Splicing bit byte
	if(info->head != PAPR_HEAD){
		Reply[add++] = info->sp_byte;
	}
    // User data byte
    for(i=0;i<len;i++){
    	Reply[add++] = data[i];
    }
    // CRC check byte or terminator
    if(info->head == FAST_HEAD){
    	Reply[add++] = 0x0D;
    	Reply[add++] = 0x0A;
    }
    else{
        add += 2;
        Crc16_Rtu_Create((unsigned char *)Reply, add, 0);
    }

    return add;
}
/***********************************************************************************
 * @brief 	Reply reply data packing
 * @ex:     Combine user data and package the response data to
 * 			form a complete response response
 * @par     node : Register Node
 * 			user : User data
            ack : Response data
 * @retval  Status Code
 **********************************************************************************/
static s_code_e Cmd_Ack(node_item_t *node, user_packet_t *user, ack_packet_t *ack)
{
    uint32_t add;
    send_item_t upload_data;

    char *Reply = (char *)ACLASS_MALLOC(ack->len + 10);

    upload_data.head	 	= user->head;
    upload_data.maincmd 	= user->maincmd;
    upload_data.subcmd 	    = user->subcmd;
    upload_data.obj_softid  = user->sourceid;
    if(user->style == CMD_READ)     upload_data.style = READ_ACK;
    else                            upload_data.style = SET_ACK;
    
    if(user->splice_total != 0){
    	upload_data.sp_byte = (user->splice_total << 4) | (user->splice_protion);
    }
    
    if(ack->reply_error != REPLY_NO_ERR){
        upload_data.style = ERROR_ACK;
        ack->data[0] = ack->reply_error;
        ack->len = 1;
    }
    // Frame data
    add = Reply_Org(&upload_data, Reply, ack->data, ack->len);

    // Send to the corresponding node according to the softid stored in msg when receiving
    Hardsend_callback interface = Get_Node_Interface(node);
	Interface_senddata(node, interface, Reply, add);

	ACLASS_FREE((void *)Reply);

    return NORMAL_STATUS;
}

/***********************************************************************************
 * @brief 		Protocol processing
 * @ex:      Frame data combination, analysis, callback, packaging and
 * 			other operations sequence combination
 * @par     msg : Incoming data index information
 * @retval  Status Code
 **********************************************************************************/
static s_code_e Cmd_Msg_Process(cmd_msg_t *msg)
{
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	static uint32_t	cnt=1;
#endif
    
	s_code_e s_code 	    = NORMAL_STATUS;
	s_code_e s_code_ret 	= NORMAL_STATUS;

	node_item_t   *node		=   msg->node;
	frame_data_t  *frame	= &(node->frame);
	user_packet_t *userdata = &(node->userdata);

#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
	CLASS_LOG_I( "Interface: %s / Cnt:%d / Frame:%d / User:%d", msg->name, cnt++, frame_dymem_cnt, userdata_dymem_cnt);
#endif
    // Frame data combination
	s_code = Frame_Combination(node);
    if(s_code != NORMAL_STATUS){
        return s_code;
    }
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    CLASS_LOG_I( "Get a full frame");
    CLASS_LOG_D( "Frame data :");
    CLASS_LOG_HEX( "", 8, (unsigned char *)frame->data, frame->sum);
#endif

    // Command forwarding
    s_code = Cmd_Forward(node);
    if(s_code != NORMAL_STATUS){
        return s_code;
    }
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    CLASS_LOG_I( "This frame is local data");
#endif

    // User data packaging
    s_code = UserDate_Pack(node);
    if(s_code != NORMAL_STATUS){
        return s_code;
    }
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    CLASS_LOG_I( "User data package completed");
    CLASS_LOG_D( "User data :");
    CLASS_LOG_HEX( "", 8, (unsigned char *)userdata->data, userdata->len);
#endif

    if(userdata->style == CMD_READ || 
       userdata->style == CMD_SET){
        /* Jump into the corresponding callback processing
         * function according to the packet information
         */
        s_code = Jump_CallBackFun(node);
    }
    else if(userdata->style == READ_ACK || 
            userdata->style == SET_ACK  || 
            userdata->style == ERROR_ACK){
        /*If it is an ACK type, find the registered sending format 
         *and put the user data into the corresponding "send_item_t" structure
         */
        
        s_code = SendACK_Process(userdata);
        Clean_Frame(frame);
        Clean_Userdata(userdata);
        return s_code;
    }
    else{
        /* If the command type is not find,
         * it may be an error condition. Exit without processing
         */
        Clean_Frame(frame);
        Clean_Userdata(userdata);
        return E_Userdata_style_error;
    }

    if(s_code != NORMAL_STATUS){

    	if(s_code == W_Callback_could_not_find){
    		// Return an error, but continue to run, output at the end
    		s_code_ret = s_code;
    	}
    	else{
    		return s_code;
    	}
    }
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    CLASS_LOG_D( "Ack data :");
    CLASS_LOG_HEX( "", 8, (unsigned char *)ackdata->data, ackdata->len);
#endif

    // Run the reply reply function
    Cmd_Ack(node, userdata, ackdata);
    if(s_code != NORMAL_STATUS){
        return s_code;
    }
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    CLASS_LOG_I( "Reply complete\r\n");
#endif

    // Release data cache
    if(userdata->splice_total == userdata->splice_protion){
        Clean_Userdata(userdata);
    }

#if     A_PROTOCOL_USE_SYSTEM_RESET == 1
    // If you need to reset, after replying
    if(ackdata->system_reset_flag != 0){
        A_PROTOCOL_DELAYMS_FUN(A_PROTOCOL_RESET_DELAYTIME);
    	A_PROTOCOL_SYSTEM_RESET_FUN();
    }
#endif

    return s_code_ret;
}
/***********************************************************************************
 * @brief 		Set the local node software address
 * @ex:			
 * 				
 * @par         
 *
 * @retval      void
 **********************************************************************************/
void Aclass_SET_LocalSoftID(uint8_t softid)
{
    local_softid = softid;
}
/***********************************************************************************
 * @brief 		Hardware interface registration
 * @ex:			
 * 				
 * @par         hard_name:Hardware interface name
 *              interface:Send data callback function
 * @retval   	success:0
 * 				failed:-1
 **********************************************************************************/
int Aclass_Hardware_Register
(
	const char *		hard_name, 
	Hardsend_callback 	interface, 
	Hardsend_flush 		flush )

{
	hard_item_t *hard = ACLASS_MALLOC(sizeof(hard_item_t));
	if(hard == NULL){
		return -1;
	}

	hard->interface = interface;
	hard->flush_interface = flush;
    hard->hard_name = String_To_Crc32(hard_name);

	slist_append(&hard_item_list, &hard->list);

#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    string_item_t *string = ACLASS_MALLOC(sizeof(string_item_t));
    if(string == NULL){
        return -1;
    }
    string->name_crc32  = hard->hard_name;
    strcpy(string->name_str, hard_name);
    slist_append(&string_item_list, &string->list);
#endif

	return 0;
}
/***********************************************************************************
 * @brief 		node registration
 * @ex:
 * @par			name:Hardware interface name
 * 				node_type:node_type_e type
 * 				soft_id:Defined software address
 * 				phyaddr:Hardware address in the subnet
 * @retval   	success:0
 * 				failed:-1
 **********************************************************************************/
int Aclass_Node_Register
(
    const char *    node_name,
    const char *    hard_name,
    node_type_e     node_type, 
    uint8_t         node_softid, 
    uint8_t         node_phyaddr )
{
	uint8_t *buf;
	node_item_t *node = ACLASS_MALLOC(sizeof(node_item_t));
	if(node == NULL){
		return -1;
	}

    buf = (uint8_t *)ACLASS_MALLOC(A_PROTOCOL_RECIVE_MAX);
    if(buf == NULL){
        return -1;
    }
    DataQueueInit(&node->queue, buf, A_PROTOCOL_RECIVE_MAX);

    Clean_Frame(&node->frame);
    Clean_Userdata(&node->userdata);

    node->node_type = node_type;
    node->softid    = node_softid;
    node->phyaddr   = node_phyaddr;
    node->hard_name = String_To_Crc32(hard_name);
    node->node_name = String_To_Crc32(node_name);

	if(node_type == PARENT_NODE){
		slist_insert(&node_item_list, &node->list);
	}
	else{
		slist_append(&node_item_list, &node->list);
	}

	return 0;
}
/***********************************************************************************
 * @brief 		Send data registration
 * @ex:
 * @par
 * @retval   	success:0
 * 				failed:-1
 **********************************************************************************/
int Aclass_Send_Register
(
    const char *        send_name,
    const char *        node_name,
    cmd_head_e          head,
    cmd_style_e         style,
    uint8_t             maincmd, 
    uint8_t             subcmd,
    uint32_t            recv_max )
{
    uint32_t    nodename = String_To_Crc32(node_name);
	send_item_t *send = ACLASS_MALLOC(sizeof(send_item_t));
    node_item_t *node;
    slist_t     *list_node = NULL;

	if(send == NULL){
		return -1;
	}

    send->recv_ack.data = ACLASS_MALLOC(recv_max);
	if(send->recv_ack.data == NULL && recv_max > 0){
		return -1;
	}

    condition_traverse(&node_item_list, node_item_t, node, 
    if(node->node_name == nodename));

    if(list_node == NULL){
    	return -1;
    }

	send->head          = head;
	send->obj_softid    = node->softid;
	send->style         = style;
	send->maincmd       = maincmd;
	send->subcmd        = subcmd;
    send->recv_ack.len  = -1;
    send->send_name     = String_To_Crc32(send_name);

	slist_append(&send_item_list, &send->list);

	return 0;
}
/***********************************************************************************
 * @brief 		cmd registration
 * @ex:
 * @par  
 * @retval   	success:0
 * 				failed:-1
 **********************************************************************************/
int Aclass_Cmd_Register
(
    uint8_t         maincmd,
    uint8_t         subcmd,
    Cmd_callback    callback,
    void            *param)
{
	cmd_item_t *cmd = ACLASS_MALLOC(sizeof(cmd_item_t));
	if(cmd == NULL){
		return -1;
	}

	cmd->maincmd = maincmd;
	cmd->subcmd = subcmd;
	cmd->callback = callback;
    cmd->param = param;
	slist_append(&cmd_item_list, &cmd->list);

	return 0;
}
/***********************************************************************************
 * @brief 		Type A protocol data sending function
 * @ex:
 * @par			name : Send registry index number
 * 				buff : To be sent buffer
 * 				len  : Send length
 * @retval       0 : successful
 * 				-1: failed
 **********************************************************************************/
int Aclass_Protocol_Send
(
    const char *    send_name, 
    void *          buff, 
    uint32_t        len )
{
	char *              buff_in = (char *)buff;
	uint32_t            len_in = len;
	uint32_t            head_len,data_len,reply_len;
	slist_t     *       list_node = NULL;
	send_item_t *       send;
	node_item_t *       node;
	Hardsend_callback   interface;
    uint32_t sendname = String_To_Crc32(send_name);

    condition_traverse(&send_item_list, send_item_t, send, 
    if(send->send_name == sendname));

	if(list_node == NULL){
		return -1;
	}

	node = Get_Node_Accord_Softid(CHILD_NODE, send->obj_softid);
	interface = Get_Node_Interface(node);

    // Splicing bit variable
    uint8_t splice_total = (len_in / A_PROTOCOL_SEND_MAX) + 1;
    uint8_t splice_protion = 1;

resend:
	if(len_in >= A_PROTOCOL_SEND_MAX){
		data_len = A_PROTOCOL_SEND_MAX;
	}
	else{
		data_len = len_in;
	}

	send->sp_byte = (splice_total << 4) | (splice_protion);

	/* A3 fast data is sent quickly in three times,
	 * and the data is not copied, which improves efficiency
	 */
	if(send->head == FAST_HEAD){
		char Reply_head_buff[20];
		char Reply_tail_buff[] = {0x0d, 0x0a};
		head_len = Fast_HeadTail_Org(send, data_len, Reply_head_buff);
		// Call the interface to send three times
#if     A_PROTOCOL_USE_RTOS == 1
		if (0 != A_PROTOCOL_IRQ_STA)
		{
			xSemaphoreTake( commandMutex, portMAX_DELAY );
		}
        else
        {
            xSemaphoreTakeFromISR( commandMutex, NULL );
        }
    	
#endif
		interface(node->phyaddr, Reply_head_buff, head_len);
		interface(node->phyaddr, buff_in, 		  data_len);
		interface(node->phyaddr, Reply_tail_buff, 		 2);
#if     A_PROTOCOL_USE_RTOS == 1
		if (0 != A_PROTOCOL_IRQ_STA)
		{
			xSemaphoreGive( commandMutex );
		}
        else
        {
            xSemaphoreGiveFromISR( commandMutex, NULL );
        }
		
#endif
	}
	else{
		// Request a frame temporary buffer
		char *Reply = (char *)ACLASS_MALLOC(data_len + 10);
		// Frame data assembly
		reply_len = Reply_Org(send, Reply, buff_in, data_len);
		// Call the interface to send
		Interface_senddata(node, interface, Reply, reply_len);
		// Release the cache
		ACLASS_FREE((void *)Reply);
	}

	len_in  -= data_len;
	buff_in += data_len;
	splice_protion++;

	if(len_in > 0){
		goto resend;
	}

    send->recv_ack.len  = -1;

	return 0;
}
/***********************************************************************************
 * @brief 		Response polling functions
 * @ex:     After sending data using the "Aclass_Protocol_Send" function, 
 *          use this function if you need to receive a reply message.
 * @par		name:Sending format name
 *          recv_data:Reply data pointer
 *          delay:User-defined time delay functions
 *          wait_time:Timeout waiting time,"ACLASS_DEADWAIT" is dead wait
 * @retval      recv_ack_t
 **********************************************************************************/
recv_ack_t  *Aclass_Protocol_WaitAck
(
    const char *        send_name, 
    AclassDelayType     delay, 
    uint32_t            wait_time )
{
	slist_t     *list_node = NULL;
	send_item_t *send;
    uint32_t    time=0;
    uint32_t    sendname = String_To_Crc32(send_name);

    condition_traverse(&send_item_list, send_item_t, send,
    if(send->send_name == sendname));

	if(list_node == NULL){
		return NULL;
	}

    while(1){
        // Replies have been received
        if(send->recv_ack.len >= 0){
            return &send->recv_ack;
        }

        if(wait_time != ACLASS_DEADWAIT){
            if(time ++ >= wait_time){
                break;
            }
        }
        delay(1);      
    }

    return NULL;
}
/************************************************************************************
  * @brief 	notify the task to process the upper-level call function
  * @ex: 	The network ID of the sender is judged by the communication
  * 		interface function and the physical address of the sender,
  * 		so as to put the data into the corresponding ring buffer
  * @par 	interface : communication interface function
           	phyaddr : the physical address of the sender
          	  buff : the first address of the received data
             len : received data length
             isISR : 0 means not to call in interrupt, 1 means to call in interrupt
* @retval     0:success
*            -1:error
  ***********************************************************************************/
int Aclass_CmdReceive_Notify
(
    const char *        hard_name, 
    uint8_t             phyaddr, 
    void *              buff , 
    uint32_t            len, 
    uint8_t             irq )
{
    uint32_t    hardname = String_To_Crc32(hard_name);
    slist_t *   list_node = NULL;
    cmd_msg_t   msg;

    if(len == 0){
    	return -1;
    }

    condition_traverse(&node_item_list, node_item_t, msg.node,
    if((msg.node->hard_name == hardname) && (msg.node->phyaddr == phyaddr)));

    if(list_node != NULL){
	    //Data is written to the corresponding ring buffer
	    DataQueueWrite(&msg.node->queue, (uint8_t *)buff, len);
        
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0

        // Find the linked list of node names, convert crc32 to string, then copy to msg
        string_item_t   *string;
        condition_traverse(&string_item_list, string_item_t, string,
        if(string->name_crc32 == hardname));

        if(list_node == NULL){
            return -1;
        }
		strcpy(msg.name, string->name_str);
#endif

#if     A_PROTOCOL_USE_RTOS == 1
	    if (irq){
	        portBASE_TYPE xHigherPriorityTaskWoken = pdFALSE;
	        xQueueSendFromISR(commandQueue, &msg, &xHigherPriorityTaskWoken);
	    }
	    else{
	        xQueueSend(commandQueue, &msg, 0);
	    }
#elif   A_PROTOCOL_USE_RTOS == 0
        DataQueueWrite(&commandQueue, (uint8_t *)&msg, sizeof(cmd_msg_t));
#endif
        
	    return 0;
    }

    return -1;
}
/***********************************************************************************
 * @brief 		Bare metal running functions
 * @ex:      Used in bare-metal systems, placed in the main function to poll
 * @par
 * @retval   
 **********************************************************************************/
int Aclass_Protocol_Runing(void)
{
    s_code_e s_code;
    
#if     A_PROTOCOL_USE_RTOS == 0
    if(DataQueueGetLen(&commandQueue) <= 0){
        return -1;
    }
    DataQueueRead(&commandQueue, (uint8_t *)&msg_globel, sizeof(cmd_msg_t));
#endif
    
    s_code = NORMAL_STATUS;
    
    if(DataQueueGetLen(&msg_globel.node->queue) > 0){
        
        s_code = Cmd_Msg_Process(&msg_globel);
        
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
        if(s_code != NORMAL_STATUS){
            char *str = Scode_To_Str(s_code);
            switch(str[0])
            {
                case('I'):
                    CLASS_LOG_I("%s \r\n", str+2);
                    break;
                case('W'):
                    CLASS_LOG_W("%s \r\n", str+2);
                    break;
                case('E'):
                    CLASS_LOG_E("%s \r\n", str+2);
                    break;
                case('D'):
                    CLASS_LOG_D("%s \r\n", str+2);
                    break;
            }
        }
#endif 
    }   
    
    return s_code;
}
/***********************************************************************************
 * @brief 		Type A protocol processing task function
 * @ex:
 * @par
 * @retval   void
 **********************************************************************************/
#if     A_PROTOCOL_USE_RTOS == 1
static void Aclass_Protocol_Task(void *pvParameters)
{
    for ( ;; ) { 
        xQueueReceive(commandQueue, &msg_globel, portMAX_DELAY);
        
        Aclass_Protocol_Runing();
    }
}
#endif

/***********************************************************************************
 * @brief 		Type A protocol processing initialization function
 * @ex:
 * @par
 * @retval     0:success
 *            -1:error
 **********************************************************************************/
int  Aclass_Protocol_Init(int(*register_callback)(void))
{
    
#if     A_PROTOCOL_USE_RTOS == 1
    commandQueue = xQueueCreate(A_PROTOCOL_MSG_QUEUE_SIZE, sizeof(cmd_msg_t));
    commandMutex = xSemaphoreCreateMutex();
#elif   A_PROTOCOL_USE_RTOS == 0
    uint16_t buf_size = A_PROTOCOL_MSG_QUEUE_SIZE * sizeof(cmd_msg_t);
    uint8_t *buf = ACLASS_MALLOC(buf_size);
    DataQueueInit(&commandQueue, buf, buf_size);
#endif
    
    ackdata		 = ACLASS_MALLOC(sizeof(ack_packet_t));
    
    if(ackdata == NULL){
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    	CLASS_LOG_E("Ackdata malloc failed");
#endif
    	return -1;
    }
    slist_init(&hard_item_list);
	slist_init(&node_item_list);
	slist_init(&send_item_list);
	slist_init(&cmd_item_list);
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    slist_init(&string_item_list);
#endif

    int val = register_callback();

    if(val < 0){
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    	CLASS_LOG_E("Register failed");
#endif
    	return -1;
    }
    if(slist_first(&hard_item_list) == NULL){
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    	CLASS_LOG_E("Unregistered hardware interface");
#endif
    	return -1;
    }
    if(slist_first(&node_item_list) == NULL){
#if 	A_PROTOCOL_USE_DEBUG_LOG != 0
    	CLASS_LOG_E("Missing parent node");
#endif
    	return -1;
    }

#if     A_PROTOCOL_USE_RTOS == 1
	xTaskCreate(Aclass_Protocol_Task, "Aclass_Protocol_Task",
    			A_PROTOCOL_TASK_SIZE, NULL, A_PROTOCOL_TASK_PRIORITY, 0);
#endif

    return 0;
}

#if A_PROTOCOL_USE_SHELL == 1
uint8_t get_shell_type(void)
{
    return g_shell_type;
}

static int Aclass_shell(uint8_t argc, char **argv)
{
    size_t i = 0;
#define CMD_LOG_INDEX 0
    const char *help_info[] =
        {
            [CMD_LOG_INDEX] = "Aclass log [on|off]   - Select On/Off log",
        };
    if (argc < 2)
    {
        Ashell_print("Usage:\r\n");
        for (i = 0; i < sizeof(help_info) / sizeof(char *); i++)
        {
            Ashell_print("%s\r\n", help_info[i]);
        }
        Ashell_print("\r\n");
    }
    else
    {
        const char *operator= argv[1];
        if (!strcmp(operator, "log"))
        {
            if (argc >= 3)
            {
                char *type_name = argv[2];
                if (!strcmp(type_name, "on"))
                {
                    g_shell_type = 1;
                }
                else if (!strcmp(type_name, "off"))
                {
                    g_shell_type = 0;
                }
                else
                {
                    Ashell_print("Please input on or off.\r\n");
                }
            }
        }
        else
        {
            Ashell_print("Usage:\r\n");
            for (i = 0; i < sizeof(help_info) / sizeof(char *); i++)
            {
                Ashell_print("%s\r\n", help_info[i]);
            }
            Ashell_print("\r\n");
        }
    }
    return 1;
}
SHELL_EXPORT_CMD(SHELL_CMD_PERMISSION(0)|SHELL_CMD_TYPE(SHELL_TYPE_CMD_MAIN), Aclass, Aclass_shell, A class protocol shell);
#endif
/******************* (C) COPYRIGHT 2021 CIQTEK taoye *****END OF FILE****/

