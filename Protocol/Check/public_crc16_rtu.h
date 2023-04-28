/*
 * aclass_iap.h
 *
 *  Created on: 2022.03.04
 *      Author: taoye
 */

#ifndef PUBLIC_CRC16_RTU_H_
#define PUBLIC_CRC16_RTU_H_

#include "stdint.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

#define PUB_CRC16_VERSION    "V0.0.1"

unsigned short      Crc16_Ustrcalcrc        ( unsigned char *pStr ,unsigned int len );
void                Crc16_Rtu_Create        ( unsigned char *Buff ,unsigned int len ,unsigned int head );
unsigned char       Crc16_Rtu_Verification  ( unsigned char *Buff ,unsigned int len ,unsigned int head );



#endif
