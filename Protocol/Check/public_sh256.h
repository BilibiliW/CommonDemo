/*
 * aclass_iap.h
 *
 *  Created on: 2022.03.04
 *      Author: taoye
 */

#ifndef PUBLIC_SHA256_H_
#define PUBLIC_SHA256_H_

#include "stdint.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

#define PUB_SH256_VERSION    "V0.0.1"

typedef unsigned char BYTE;             // 8-bit byte
typedef unsigned int  WORD;             // 32-bit word, change to "long" for 16-bit machines

typedef struct {
	BYTE data[64];
	WORD datalen;
	unsigned long long bitlen;
	WORD state[8];
} sha256_t;

void    sha256_init     (sha256_t *ctx);
void    sha256_update   (sha256_t *ctx, const BYTE data[], size_t len);
void    sha256_final    (sha256_t *ctx, BYTE hash[]);

#endif
