/*
 * crc16_rtu.c
 *
 *  Created on: 2021 09 03
 *      Author: samuel
 */

/* Includes ------------------------------------------------------------------*/
#include "public_crc16_rtu.h"

/* Private defines -----------------------------------------------------------*/


/* Private Struct  -----------------------------------------------------------*/


/* Private enum    -----------------------------------------------------------*/


/* Private Variable  ---------------------------------------------------------*/
//Pointer

//Array

//Const

//CRC余式表
static const unsigned int UstrCrcTable[16] =
{
    0x0000,0x1021,0x2042,0x3063,0x4084,0x50A5,0x60C6,0x70E7,
    0x8108,0x9129,0xA14A,0xB16B,0xC18C,0xD1AD,0xE1CE,0xF1EF
};


/* Private function prototypes -----------------------------------------------*/




/**************************************************************************************************
**  函数名称:  ustrcalcrc
**  功能描述:  计算CRC
**  输入参数:  pSrc    -- 指向源字符串的首地址
**             len     --    待计算校验值字符串的长度
**  输出参数:  crcval  -- 计算出的CRC值
**  返回参数:  无
**************************************************************************************************/
unsigned short Crc16_Ustrcalcrc(unsigned char *pStr,unsigned int len)
{
	unsigned short crc;
	unsigned char temp;

	if(pStr == 0 || len == 0)
	{
		return 0;
	}

	crc = 0;
	while(len--) {
		// 暂存CRC的高4位
		temp = ((unsigned char)(crc >> 8)) >> 4;
		// 取CRC的低12位
		crc <<= 4;

		// CRC高4位和本字节的高4位相加后查表计算CRC,再加前次CRC的余数
		crc ^= UstrCrcTable[temp^(*pStr >> 4)];

		// 暂存CRC的高4位
		temp = ((unsigned char)(crc >> 8)) >> 4;
		// 取CRC的低12位
		crc <<= 4;

		// CRC高4位和本字节的低4位相加后查表计算CRC,再加前次CRC的余数
		crc ^= UstrCrcTable[temp^(*pStr & 0x0f)];

		pStr++;
	}
	return    crc;
}


/***********************************************************************************
 * @brief  生成CRC-RTU校验码
 * ex:
 * @retval void None
 * @par
 * None
 * @par Called functions:
 * None
 **********************************************************************************/
void Crc16_Rtu_Create(unsigned char *Buff ,unsigned int len ,unsigned int head)
{
	unsigned int i=0,j=0;
	volatile unsigned int Crc_Temp = 0xFFFF;

	if(Buff == 0 || len == 0)
	{
		return;
	}

	Buff += head;
	for (i = head; i < (len-2); i++)
	{
		Crc_Temp ^= *Buff;
		Buff++;
		for (j = 0; j < 8; j++)
		{
			if (Crc_Temp & 0x0001)
			{
				Crc_Temp >>= 1;
				Crc_Temp ^= 0xA001;
			}
			else
			{
				Crc_Temp >>= 1;
			}
		}
	}
	*Buff = Crc_Temp & 0xFF;
	Buff++;
	*Buff = (unsigned char)((Crc_Temp & 0xFF00) >> 8);
}

/***********************************************************************************
 * @brief   CRC-RTU校验码验证
 * ex:
 * @retval void None
 * @par
 * None
 * @par Called functions:
 * None
 **********************************************************************************/
unsigned char Crc16_Rtu_Verification(unsigned char *Buff ,unsigned int len ,unsigned int head)
{
	unsigned int i=0,j=0;
	volatile unsigned int Crc_Temp = 0xFFFF;

	if(Buff == 0 || len == 0)
	{
		return 0;
	}
	Buff += head;
	for (i = head; i < len; i++)
	{
		Crc_Temp ^= *Buff;
		Buff++;
		for (j = 0; j < 8; j++)
		{
			if (Crc_Temp & 0x0001)
			{
				Crc_Temp >>= 1;
				Crc_Temp ^= 0xA001;
			}
			else
			{
				Crc_Temp >>= 1;
			}
		}
	}
	if(Crc_Temp == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


/******************* (C) COPYRIGHT 2021 CIQTEK Samuel *****END OF FILE****/
