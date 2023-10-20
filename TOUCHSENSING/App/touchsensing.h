/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : touchsensing.h
  * Description        : This file provides code for the configuration
  *                      of the touchsensing instances.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __touchsensing_H
#define __touchsensing_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "tsl_conf.h"
#include "tsl_user.h"

/* USER CODE BEGIN 0 */
 // PB7 = LED_RED  WiMOD:NC, eMOD:Available
 #define LED_RED_TOGGLE {GPIOB->ODR ^=  (1<<7);}
 #define LED_RED_OFF    {GPIOB->ODR &= ~(1<<7);}
 #define LED_RED_ON     {GPIOB->ODR |=  (1<<7);}
 // PA15 = LED_BLUE
 #define LED_BLUE_TOGGLE  {GPIOA->ODR ^=  (1<<15);}
 #define LED_BLUE_OFF     {GPIOA->ODR &= ~(1<<15);}
 #define LED_BLUE_ON      {GPIOA->ODR |=  (1<<15);}
 // PA8 = LED_GREEN  for TS
#define LED_GREEN_TOGGLE  {GPIOA->ODR ^=  (1<<8);}
#define LED_GREEN_OFF     {GPIOA->ODR &= ~(1<<8);}
#define LED_GREEN_ON      {GPIOA->ODR |=  (1<<8);}
/* USER CODE END 0 */

/* Global variables ---------------------------------------------------------*/

/* USER CODE BEGIN 1 */
 void ProcessSensors(void);
/* USER CODE END 1 */

/* TOUCHSENSING init function */
void MX_TOUCHSENSING_Init(void);

/* USER CODE BEGIN 2 */
extern CONST TSL_LinRot_T MyLinRots[];
/* USER CODE END 2 */

#ifdef __cplusplus
}
#endif
#endif /*__touchsensing_H */

/**
  * @}
  */

/**
  * @}
  */

