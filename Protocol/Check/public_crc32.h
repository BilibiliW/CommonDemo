/*
 * aclass_iap.h
 *
 *  Created on: 2022.03.04
 *      Author: taoye
 */

#ifndef PUBLIC_CRC32_H_
#define PUBLIC_CRC32_H_

#include "stdint.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

#define PUB_CRC32_VERSION    "V0.0.1"

uint32_t    String_To_Crc32     (const char *string);


#endif
