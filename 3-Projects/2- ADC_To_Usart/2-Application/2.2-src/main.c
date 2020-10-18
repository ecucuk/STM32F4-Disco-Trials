
#include "main.h"
#include "rcc.h"
#include "ADC.h"
#include "gpio.h"
#include "DMA.h"

  uint32_t ADC_Value = 0;
void main()
{

  RCC_Initialize();
  ADC_Initialize();
  ADC_GPIO_Initalize();
//  USART1_Initialize();
  ADC_DMA_Initalize();
  
    /* Start ADC Software Conversion */ 
  ADC_SoftwareStartConv(ADC1);
  for(;;)
  {
    
    ADC_Value = Get_Value_ADC() *3300/0xFFF;
    
    
  }
  
}
