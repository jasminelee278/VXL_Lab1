/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_7SEG1_A_Pin GPIO_PIN_1
#define LED_7SEG1_A_GPIO_Port GPIOA
#define LED_7SEG1_B_Pin GPIO_PIN_2
#define LED_7SEG1_B_GPIO_Port GPIOA
#define LED_7SEG1_C_Pin GPIO_PIN_3
#define LED_7SEG1_C_GPIO_Port GPIOA
#define LED_7SEG1_D_Pin GPIO_PIN_4
#define LED_7SEG1_D_GPIO_Port GPIOA
#define LED_7SEG1_E_Pin GPIO_PIN_5
#define LED_7SEG1_E_GPIO_Port GPIOA
#define LED_7SEG1_F_Pin GPIO_PIN_6
#define LED_7SEG1_F_GPIO_Port GPIOA
#define LED_7SEG1_G_Pin GPIO_PIN_7
#define LED_7SEG1_G_GPIO_Port GPIOA
#define LED1_R_Pin GPIO_PIN_0
#define LED1_R_GPIO_Port GPIOB
#define LED1_Y_Pin GPIO_PIN_1
#define LED1_Y_GPIO_Port GPIOB
#define LED1_G_Pin GPIO_PIN_2
#define LED1_G_GPIO_Port GPIOB
#define LED4_Y_Pin GPIO_PIN_10
#define LED4_Y_GPIO_Port GPIOB
#define LED4_G_Pin GPIO_PIN_11
#define LED4_G_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_13
#define LED_RED_GPIO_Port GPIOB
#define LED_YELLOW_Pin GPIO_PIN_14
#define LED_YELLOW_GPIO_Port GPIOB
#define LED_7SEG2_A_Pin GPIO_PIN_9
#define LED_7SEG2_A_GPIO_Port GPIOA
#define LED_7SEG2_B_Pin GPIO_PIN_10
#define LED_7SEG2_B_GPIO_Port GPIOA
#define LED_7SEG2_C_Pin GPIO_PIN_11
#define LED_7SEG2_C_GPIO_Port GPIOA
#define LED_7SEG2_D_Pin GPIO_PIN_12
#define LED_7SEG2_D_GPIO_Port GPIOA
#define LED_7SEG2_E_Pin GPIO_PIN_13
#define LED_7SEG2_E_GPIO_Port GPIOA
#define LED_7SEG2_F_Pin GPIO_PIN_14
#define LED_7SEG2_F_GPIO_Port GPIOA
#define LED_7SEG2_G_Pin GPIO_PIN_15
#define LED_7SEG2_G_GPIO_Port GPIOA
#define LED2_R_Pin GPIO_PIN_3
#define LED2_R_GPIO_Port GPIOB
#define LED2_Y_Pin GPIO_PIN_4
#define LED2_Y_GPIO_Port GPIOB
#define LED2_G_Pin GPIO_PIN_5
#define LED2_G_GPIO_Port GPIOB
#define LED3_R_Pin GPIO_PIN_6
#define LED3_R_GPIO_Port GPIOB
#define LED3_Y_Pin GPIO_PIN_7
#define LED3_Y_GPIO_Port GPIOB
#define LED3_G_Pin GPIO_PIN_8
#define LED3_G_GPIO_Port GPIOB
#define LED4_R_Pin GPIO_PIN_9
#define LED4_R_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
