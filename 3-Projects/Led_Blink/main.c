
#include "main.h"
#include "stm32f4xx_rcc.h"
#include "gpio.h"

RCC_ClocksTypeDef RCC_Clocks;

void main()
{
  /* SysTick end of count event each 1ms */
  RCC_GetClocksFreq(&RCC_Clocks);
  SysTick_Config(RCC_Clocks.HCLK_Frequency / 1000);

 GPIO_Initalize (LED_GREEN_GPIO_PORT, LED_GREEN, GPIO_Mode_OUT, GPIO_Medium_Speed, GPIO_OType_PP, GPIO_PuPd_NOPULL);   
    
  for(;;) 
  { 
    
    
  }
  

}
