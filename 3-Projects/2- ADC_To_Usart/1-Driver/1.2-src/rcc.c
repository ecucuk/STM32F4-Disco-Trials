#include "rcc.h"
#include "stm32f4xx_rcc.h"

RCC_ClocksTypeDef RCC_ClockFreq;

void RCC_Initialize()
{
//  RCC_SYSCLKConfig(RCC_SYSCLKSource_HSE);
//  RCC_HSEConfig(RCC_HSE_ON);                                                    /*HSE Crystal dahil edildi.*/

  RCC_GetClocksFreq(&RCC_ClockFreq);                                            /*RCC_ClockFreq struct içerisinde configurasyon datalari atildi.*/
  
//  SysTick_Config(SystemCoreClock / 168000);                                     /* System Tick Value Degeri degistirildi = 168 000 000 /168 000 = 1 KHz --> T = 1/F (1/1000) = 1 ms dir*/
  
}