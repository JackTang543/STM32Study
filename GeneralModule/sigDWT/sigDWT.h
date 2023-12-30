#ifndef __SIG_DWT_H__
#define __SIG_DWT_H__

//sigDWT.h
//By Sightseer. 2023.12.30 v1.0

/* 使用说明:
* 1.不适用于Cortex-M0/M0+内核,他们不具有DWT单元,测试平台:STM32F103HAL库
* 2.首先使用sigDWT_Init(HAL_RCC_GetSysClockFreq());初始化外设
* 3.如果你想使用DWT做us/ms级延时,使用sigDWT_Delay_us(us);或者sigDWT_Delay_ms(ms);
* 4.如果你想用DWT做us级时间测量,使用sigDWT_MeasureStart();开始测量,使用sigDWT_MeasureEnd();结束测量
* 5.测量结束后,使用sigDWT_GetMeasure_us();获取测量结果(us)
*/

#ifdef __cplusplus
extern "C"{
#endif

#include "stm32f1xx_hal.h"

void sigDWT_Init(uint32_t freq);
void sigDWT_Delay_us(uint32_t time_us);
void sigDWT_Delay_ms(uint32_t time_ms);
void sigDWT_MeasureStart();
void sigDWT_MeasureEnd();
uint32_t sigDWT_GetMeasure_us();

#ifdef __cplusplus
}
#endif

#endif
