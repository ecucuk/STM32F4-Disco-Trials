
#include "gpio.h"

GPIO_InitTypeDef  GPIO_InitStructure;

void GPIO_Initalize (GPIO_TypeDef* GPIO_PORT,                                   /* GPIO Initalize islemi yapiliyor */
                     uint16_t GPIO_Pin,
                     GPIOMode_TypeDef GPIO_Mode,
                     GPIOSpeed_TypeDef GPIO_Speed, 
                     GPIOOType_TypeDef GPIO_OType,
                     GPIOPuPd_TypeDef GPIO_PuPd)  
{
  if(GPIO_PORT == GPIOA){
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);
  }
  else if(GPIO_PORT == GPIOB){
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB,ENABLE);
  }
  else if(GPIO_PORT == GPIOC){
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC,ENABLE);
  }
  else if(GPIO_PORT == GPIOD){
    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
  }
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed;
  GPIO_InitStructure.GPIO_OType = GPIO_OType;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd;
  
  GPIO_Init(GPIO_PORT, &GPIO_InitStructure);
  
}

void ADC_GPIO_Initalize()
{
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);  
  
    /* Configure ADC1 Channel1 pin as analog input ******************************/
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL ;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
  
}