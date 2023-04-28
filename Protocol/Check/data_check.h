
#ifndef DATA_CHECK_H
#define DATA_CHECK_H

#include <stdint.h>
#include <string.h>
typedef unsigned char BYTE;             // 8-bit byte
typedef unsigned int  WORD;             // 32-bit word, change to "long" for 16-bit machines

//typedef struct {
//    BYTE data[64];
//    WORD datalen;
//    unsigned long long bitlen;
//    WORD state[8];
//} sha256_t;


typedef struct {
    unsigned char data[64];
    unsigned int datalen;
    unsigned int bitlen;
    unsigned int state[8];
} sha256_t;

class data_check
{
public:
    data_check();

    uint16_t   Crc16_Ustrcalcrc(unsigned char *pStr ,unsigned int len );
    void       Crc16_Rtu_Create( unsigned char *Buff ,unsigned int len ,unsigned int head );
    uint8_t    Crc16_Rtu_Verification( unsigned char *Buff ,unsigned int len ,unsigned int head );

    uint32_t   String_To_Crc32         (const char *string);

    void       sha256_init             (sha256_t *ctx);
    void       sha256_update           (sha256_t *ctx, const BYTE data[], size_t len);
    void       sha256_final            (sha256_t *ctx, BYTE hash[]);
};

#endif // DATA_CHECK_H
