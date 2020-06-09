#ifndef _MODBUS_H
#define _MODBUS_H
//#include "main.h"
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#define ILLEGAL_FUN				-1
#define ILLEGAL_ADD				-2
#define ILLEGAL_DATA			-3
#define SLAVE_ERR				-4
#define ENSURE					-5
#define SLAVE_BUSY				-7

struct _MB_FUN{
	int16_t (*mb_01)(uint16_t start_addr,uint16_t regs,uint8_t *return_buf);
	int16_t (*mb_02)(uint16_t start_addr,uint16_t regs,uint8_t *return_buf);
	int16_t (*mb_03)(uint16_t start_addr,uint16_t regs,uint8_t *return_buf);
	int16_t (*mb_04)(uint16_t start_addr,uint16_t regs,uint8_t *return_buf);
	int16_t (*mb_05)(uint16_t start_addr,uint16_t data,uint8_t *return_buf);
	int16_t (*mb_06)(uint16_t start_addr,uint16_t data,uint8_t *return_buf);
	int16_t (*mb_0F)(uint16_t start_addr,uint16_t regs,uint8_t *data_pt,uint8_t *return_buf);
	int16_t (*mb_10)(uint16_t start_addr,uint16_t regs,uint8_t *data_pt,uint8_t *return_buf);
};
typedef unsigned short (*mb_crc_t)(unsigned char const *, size_t);
uint16_t getParity(uint8_t *buf,size_t len);
uint8_t getMbAdd(void);
void mbSlaveInit(uint8_t addr,struct _MB_FUN *mb,mb_crc_t crc_fun);
int16_t mbSlaveExp(uint8_t *recv,uint8_t recv_len,uint8_t *return_buf);
void setMbAdd(uint8_t add);
#endif
