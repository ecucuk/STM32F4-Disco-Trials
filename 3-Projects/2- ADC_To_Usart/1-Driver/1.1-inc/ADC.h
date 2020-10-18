#ifndef _ADC_H
#define _ADC_H

#include "stdint.h" 
#include "stm32f4xx_adc.h"

void ADC_Initialize();
uint16_t Get_Value_ADC(void);



#endif