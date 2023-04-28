/*
 * A_aclass_iap.c
 *
 *  Created on: 2021
 *      Author: taoye
 */

#include "public_crc16_rtu.h"
#include "public_sh256.h"
#include "public_queue.h"
#include "A_aclass_protocol.h"

#if       A_PROTOCOL_USE_IAP == 1 

static struct{
    uint16_t num;
    uint16_t total;
    uint32_t size;
} IAP_packet_info = {1, 0, 0};
/*for iap fun*/
static uint8_t sha256_read_data[256];
static uint8_t sha256_check[2][32];
static sha256_t ctx;
extern void Interface_senddata(node_item_t *node, Hardsend_callback interface, void *data, uint32_t len);
extern Hardsend_callback Get_Node_Interface(node_item_t *node);
extern Hardsend_flush Get_flush_interface(node_item_t *node);
/*****************************************************************************
 * @brief IAP Reply sending interface
 * ex:
 * @par
 * None
 * @retval
 *****************************************************************************/
static void IAP_ReplyMsg(node_item_t *node, uint8_t main_cmd, uint8_t sub_cmd, int8_t state)
{
    uint8_t reply[9] = {0xAA, 0x60, 0x00, 0x05};
    uint16_t reply_len = 9;

    reply[4] = main_cmd;
    reply[5] = sub_cmd;
    reply[6] = state;

    Crc16_Rtu_Create(reply, reply_len, 4);
    Hardsend_callback interface = Get_Node_Interface(node);
    Hardsend_flush flush = Get_flush_interface(node);
	Interface_senddata(node, interface, reply, reply_len);
    if (flush != NULL)
        flush();
}

/*****************************************************************************
 * @brief Callback function of command 0x00 0x01
 * ex:      shake hands
 * @par
 * None
 * @retval
 *****************************************************************************/
static void IAP_Ack(frame_data_t *frame, node_item_t *port)
{
	IAP_ReplyMsg(port, 0x00, 0x01, 0);
}
/*****************************************************************************
 * @brief Callback function of command 0x00 0x02
 * ex:      Upgrade data
 * @par
 * None
 * @retval
 *****************************************************************************/
static void IAP_Update(frame_data_t *frame, node_item_t *port)
{
	 uint16_t packet_num   = (uint16_t)(frame->data[10] << 8 | frame->data[11]);
	 uint16_t packet_total = (uint16_t)(frame->data[12] << 8 | frame->data[13]);

	 if (IAP_packet_info.num != packet_num || IAP_packet_info.num > packet_total) {

       IAP_packet_info.num = 1;
       IAP_packet_info.size = 0;

       if (packet_num != 1) {
           IAP_ReplyMsg(port, 0x00, 0x02, 2);
           return;
       }
   }
   uint16_t bin_len = frame->total - 16;

    if (IAP_packet_info.num == 1) {

        uint32_t total_size = (uint32_t)packet_total * (uint32_t)bin_len;

        if (total_size > (uint32_t)A_PROTOCOL_FLASH_AREA_SIZE) {
            IAP_ReplyMsg(port, 0x00, 0x02, 1);
            return;
        }

        A_PROTOCOL_FLASH_ERASE_FUN(A_PROTOCOL_FLASH_START_ADDR, total_size);

    }

    A_PROTOCOL_FLASH_WRITE_FUN((uint8_t*)&frame->data[14], A_PROTOCOL_FLASH_START_ADDR + IAP_packet_info.size, bin_len);

    IAP_packet_info.size += bin_len;
    IAP_packet_info.total = packet_total;
    IAP_packet_info.num++;

    IAP_ReplyMsg(port, 0x00, 0x02, 0);
}
/*****************************************************************************
 * @brief Callback function of command 0x00 0x03
 * ex:      Overall check code
 * @par
 * None
 * @retval
 *****************************************************************************/
static void IAP_Check(frame_data_t *frame, node_item_t *node)
{
    if (IAP_packet_info.num <= IAP_packet_info.total) {
        IAP_ReplyMsg(node, 0x00, 0x03, 1);  
        return;
    }

    uint32_t count = 0;
    uint16_t read_len;
    sha256_init(&ctx);
    while (count < IAP_packet_info.size) {
        read_len = (IAP_packet_info.size - count > 256 ? 256 : IAP_packet_info.size - count);

        A_PROTOCOL_FLASH_READ_FUN(sha256_read_data, A_PROTOCOL_FLASH_START_ADDR + count, read_len);
        sha256_update(&ctx, sha256_read_data, read_len);
        count += read_len;
    }
    sha256_final(&ctx, &sha256_check[0][0]);
	memcpy(&sha256_check[1][0], &frame->data[14], 32);
    if(memcmp(&sha256_check[0][0], &sha256_check[1][0], 32) != 0){

    	IAP_ReplyMsg(node, 0x00, 0x03, 1);
        IAP_packet_info.num = 1;
        IAP_packet_info.total = 0;
        IAP_packet_info.size = 0;
    }
    else{

        IAP_ReplyMsg(node, 0x00, 0x03, 0);             
        A_PROTOCOL_SYSTEM_RESET_FUN();
    }
}

/*****************************************************************************
 * @brief IAP Procedure call
 * ex:  The input data is already a complete data frame that has been verified
 * @par
 * None
 * @retval
 *****************************************************************************/
int Aclass_iap_protocol(frame_data_t *frame, node_item_t *node)
{
	// CRC
    if(Crc16_Rtu_Verification(frame->data + 4, frame->sum - 4, 0) == 0){

    	IAP_ReplyMsg(node, frame->data[8], frame->data[9], 3);  // crc error
        return -1;
    }

	if(frame->data[8] == 0x00 && frame->data[9] == 0x01){
		IAP_Ack(frame, node);
	}
	else if(frame->data[8] == 0x00 && frame->data[9] == 0x02){
		IAP_Update(frame, node);
	}
	else if(frame->data[8] == 0x00 && frame->data[9] == 0x03){
		IAP_Check(frame, node);
	}
	else{
		IAP_ReplyMsg(node, 0x00, 0x00, -1);
	}

	return 0;
}

#endif
