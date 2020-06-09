#ifndef _MYLIB_H
#define _MYLIB_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
char BCDtoStr(char *str, char *BCD, int BCD_length);
void StrtoBCD(char *Cbuf, char *Bbuf, int *blen);
unsigned char Bin2BCD(unsigned char bt);
unsigned char BCD2Bin(unsigned char bt);
unsigned char long2Bcd(unsigned char m, unsigned int val);
unsigned int bcd2Long(char *bcd, unsigned char nbt);
int32_t bit24To32(uint32_t bit24);
unsigned short crc16(unsigned char const *buffer, size_t len);
unsigned short crc16_H(unsigned char const *buffer, size_t len);
float array2float(unsigned char *buf,unsigned char p1,unsigned char p2,unsigned char p3,unsigned char p4);
unsigned int array2int(unsigned char *buf,unsigned char p1,unsigned char p2,unsigned char p3,unsigned char p4);
unsigned char sumCheck(unsigned char *buf,unsigned int len);
unsigned char xorCheck(unsigned char *buf,unsigned int len);
unsigned char modbusPack(unsigned char addr,unsigned char fun,unsigned short start_add,unsigned short nregs,char *buf);
float Q_rsqrt(float number);
float pt100Res2Tmper(float res);
#endif
