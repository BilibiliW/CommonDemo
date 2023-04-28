/*
 * A_aclass_protocol.h
 *
 *  Created on: September 24, 2021
 *      Author: taoye
 */

#ifndef SRC_COMM_ACLASS_ANALAYZE_ACLASS_PROTOCOL_H_
#define SRC_COMM_ACLASS_ANALAYZE_ACLASS_PROTOCOL_H_

/* system include*/
#include "stddef.h"
#include "stdint.h"
#include "string.h"
/* private include*/
#include "public_list.h"
#include "public_queue.h"
#include "public_crc16_rtu.h"
#include "public_crc32.h"
#include "public_sh256.h"
#include "public_heap4.h"

#include "aclass_default.h"

/* Public defines -----------------------------------------------------------*/
#define   ACLASS_VERSION    "V1.0.7"

#define ACLASS_DEADWAIT     (0)

#if A_PROTOCOL_USE_SHELL == 1
#define CLASS_LOG_I(...)           \
    if (get_shell_type() == 1)     \
    {                              \
        ACLASS_LOG_I(__VA_ARGS__); \
    }
#define CLASS_LOG_D(...)           \
    if (get_shell_type() == 1)     \
    {                              \
        ACLASS_LOG_D(__VA_ARGS__); \
    }
#define CLASS_LOG_W(...)           \
    if (get_shell_type() == 1)     \
    {                              \
        ACLASS_LOG_W(__VA_ARGS__); \
    }
#define CLASS_LOG_E(...)           \
    if (get_shell_type() == 1)     \
    {                              \
        ACLASS_LOG_E(__VA_ARGS__); \
    }
#define CLASS_LOG_HEX(...)           \
    if (get_shell_type() == 1)       \
    {                                \
        ACLASS_LOG_HEX(__VA_ARGS__); \
    }
#else
#define CLASS_LOG_I(...) ACLASS_LOG_I(__VA_ARGS__)
#define CLASS_LOG_D(...) ACLASS_LOG_D(__VA_ARGS__)
#define CLASS_LOG_W(...) ACLASS_LOG_W(__VA_ARGS__)
#define CLASS_LOG_E(...) ACLASS_LOG_E(__VA_ARGS__)
#define CLASS_LOG_HEX(...) ACLASS_LOG_HEX(__VA_ARGS__)
#endif
/* Public enum    -----------------------------------------------------------*/
//Command synchronization byte enumeration
typedef enum {
    PAPR_HEAD = 0xA0,
	DATA_HEAD = 0xA1,
    HOST_HEAD = 0xA2,
    FAST_HEAD = 0xA3,
	IAP_HEAD  = 0xAA,
} cmd_head_e;

//Command type enumeration
typedef enum {
    BURST_SEND  = 0x52,
    CMD_READ    = 0x51,
    READ_ACK    = 0x54,
    CMD_SET     = 0x53,
    SET_ACK     = 0x50,
    ERROR_ACK   = 0xFF,
} cmd_style_e;

typedef enum{
	PARENT_NODE = 0,
	CHILD_NODE  = 1,
}node_type_e;

// Error type enumeration
typedef enum{
    REPLY_NO_ERR,        
	CMD_STYLE_ERR,
	CMD_NUM_ERR,
    CMD_CRC_ERR,
    CMD_SPLICE_ERR,
    CMD_PARA_ERR,
    SLAVE_ACK_ERR,
    SLAVE_FAULT_ERR,
}reply_error_e;

enum isr_flag_e{
	IN_LOOP = 0,
	IN_INT  = 1,
};

/* Public Struct  -----------------------------------------------------------*/
typedef struct{
    cmd_head_e  head;
    uint16_t    malloc_len;
    uint16_t    len;
    uint8_t     sourceid;
    cmd_style_e style;
    uint8_t     maincmd;
    uint8_t     subcmd;
    uint8_t     splice_total;
    uint8_t     splice_protion;
    uint8_t *   data;
} user_packet_t;

typedef struct{
	uint8_t         system_reset_flag;
    reply_error_e   reply_error;
    uint16_t        len;
    uint8_t         data[A_PROTOCOL_ACKDATA_MAX];
} ack_packet_t;

typedef struct{
    cmd_style_e     style;
    uint8_t *       data;
    volatile int    len;
} recv_ack_t;

typedef struct {
    uint32_t    total;
    uint32_t    sum;
    uint8_t *   data;
} frame_data_t;

typedef struct {
    uint32_t        node_name;
	uint32_t        hard_name;
	node_type_e     node_type;
    uint8_t         softid;
    uint32_t        phyaddr;
    queue_t         queue;
    frame_data_t    frame;
    user_packet_t   userdata;
    slist_t 	    list;
} node_item_t;


typedef void            ( *Hardsend_callback )  (uint8_t, char *, uint32_t);
typedef void            ( *Hardsend_flush )     ( void );
typedef void            ( *AclassDelayType )    (uint32_t);
typedef ack_packet_t *  ( *Cmd_callback )       (user_packet_t * user, void *param);


/* Public Variable  ---------------------------------------------------------*/
//Pointer

//Array

//Const


/* Pubilc function prototypes -----------------------------------------------*/


int Aclass_Protocol_Init(int(*register_callback)(void));

void Aclass_SET_LocalSoftID(uint8_t softid);

int Aclass_Hardware_Register
(   
    const char *        hard_name,
    Hardsend_callback   interface, 
    Hardsend_flush flush );

int Aclass_Node_Register
(
    const char *    node_name,
    const char *    hard_name,
    node_type_e     node_type, 
    uint8_t         node_softid, 
    uint8_t         node_phyaddr );

int Aclass_Send_Register
(
    const char *        send_name,
    const char *        node_name,
    cmd_head_e          head,
    cmd_style_e         style,
    uint8_t             maincmd, 
    uint8_t             subcmd,
    uint32_t            recv_max );

int Aclass_Cmd_Register
(
    uint8_t         maincmd,
    uint8_t         subcmd,
    Cmd_callback    callback, 
    void            *param);

int Aclass_CmdReceive_Notify
(
    const char *        hard_name, 
    uint8_t             phyaddr, 
    void *              buff , 
    uint32_t            len, 
    uint8_t             irq );

int Aclass_Protocol_Send
(
    const char *    send_name, 
    void *          buff, 
    uint32_t        len );

recv_ack_t  *Aclass_Protocol_WaitAck
(
    const char *        send_name, 
    AclassDelayType     delay, 
    uint32_t            wait_time );

int Aclass_Protocol_Runing(void);

ack_packet_t *  Ack_Malloc 	( uint32_t len );

char *Aclass_Version(void);
#if A_PROTOCOL_USE_SHELL == 1
uint8_t get_shell_type(void);
#endif
#endif /* SRC_COMM_ACLASS_ANALAYZE_ACLASS_PROTOCOL_H_ */

/******************* (C) COPYRIGHT 2021 CIQTEK taoye *****END OF FILE****/


