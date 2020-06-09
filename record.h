#ifndef _RECORD_H
#define _RECORD_H
#include <stdint.h>

struct _RECORD{
	uint32_t none_data_fg;
	uint32_t record_addr_base;
	uint32_t record_size;
	uint32_t record_addr_end;
	uint32_t *record_pre_addr;
	uint32_t *record_next_addr;
	uint8_t *data;
	void (*writeData)(uint8_t *data,uint32_t add,uint32_t len);
	void (*readData)(uint8_t *data,uint32_t add,uint32_t len);
};
void saveRecord(struct _RECORD *record);
uint32_t getRecordCount(struct _RECORD *record);
void loadRecord(uint32_t index,struct _RECORD *record);
void loadOldRecord(struct _RECORD *record);

#endif
