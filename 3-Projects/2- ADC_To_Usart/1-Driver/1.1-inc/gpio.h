#ifndef _GPIO_H
#define _GPIO_H

#include "stm32f4xx.h"
#include "stm32f4xx_gpio.h"

#define LED_GREEN_GPIO_PORT   GPIOD
#define LED_GREEN             GPIO_Pin_12

#define LED_ORANGE_GPIO_PORT  GPIOD
#define LED_ORANGE            GPIO_Pin_13

#define LED_RED_GPIO_PORT     GPIOD
#define LED_RED               GPIO_Pin_14

#define LED_BLUE_GPIO_PORT    GPIOD
#define LED_BLUE              GPIO_Pin_15





void GPIO_Initalize (GPIO_TypeDef* GPIO_PORT,                                   /* GPIO Initalize islemi yapiliyor */
                     uint16_t GPIO_Pin,
                     GPIOMode_TypeDef GPIO_Mode,
                     GPIOSpeed_TypeDef GPIO_Speed, 
                     GPIOOType_TypeDef GPIO_OType,
                     GPIOPuPd_TypeDef GPIO_PuPd);

void ADC_GPIO_Initalize();
#endif

