#ifndef _CONFIG_H
#define _CONFIG_H
#include "stm32f4xx_flash.h"

typedef struct {
	uint16_t threshold;//��ֵ
	uint16_t hdt;//��С�ŵ�ʱ������δ֪��
	uint16_t slaveaddr;
	uint16_t baudrate[2];
	uint16_t crc;
} CONFIG;

extern CONFIG config;

extern void Config_Init(void);
extern void SaveConfig2Flash(void);

#endif
