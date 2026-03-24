/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define sen1_Pin GPIO_PIN_0
#define sen1_GPIO_Port GPIOC
#define sen2_Pin GPIO_PIN_1
#define sen2_GPIO_Port GPIOC
#define sen3_Pin GPIO_PIN_2
#define sen3_GPIO_Port GPIOC
#define sen4_Pin GPIO_PIN_0
#define sen4_GPIO_Port GPIOA
#define sen5_Pin GPIO_PIN_1
#define sen5_GPIO_Port GPIOA
#define sen6_Pin GPIO_PIN_2
#define sen6_GPIO_Port GPIOA
#define sen7_Pin GPIO_PIN_3
#define sen7_GPIO_Port GPIOA
#define sen8_Pin GPIO_PIN_4
#define sen8_GPIO_Port GPIOF
#define sen9_Pin GPIO_PIN_4
#define sen9_GPIO_Port GPIOA
#define sen10_Pin GPIO_PIN_5
#define sen10_GPIO_Port GPIOA
#define sen11_Pin GPIO_PIN_6
#define sen11_GPIO_Port GPIOA
#define sen12_Pin GPIO_PIN_7
#define sen12_GPIO_Port GPIOA
#define sen13_Pin GPIO_PIN_4
#define sen13_GPIO_Port GPIOC
#define sen14_Pin GPIO_PIN_1
#define sen14_GPIO_Port GPIOB
#define sen15_Pin GPIO_PIN_12
#define sen15_GPIO_Port GPIOB
#define sen16_Pin GPIO_PIN_14
#define sen16_GPIO_Port GPIOB
#define bin2_Pin GPIO_PIN_6
#define bin2_GPIO_Port GPIOC
#define bin1_Pin GPIO_PIN_7
#define bin1_GPIO_Port GPIOC
#define ain2_Pin GPIO_PIN_8
#define ain2_GPIO_Port GPIOC
#define ain1_Pin GPIO_PIN_9
#define ain1_GPIO_Port GPIOC
#define pwma_Pin GPIO_PIN_8
#define pwma_GPIO_Port GPIOA
#define pwmb_Pin GPIO_PIN_9
#define pwmb_GPIO_Port GPIOA
#define tx_Pin GPIO_PIN_10
#define tx_GPIO_Port GPIOC
#define rx_Pin GPIO_PIN_11
#define rx_GPIO_Port GPIOC
#define RES_Pin GPIO_PIN_2
#define RES_GPIO_Port GPIOD
#define DC_Pin GPIO_PIN_4
#define DC_GPIO_Port GPIOB
#define CS_Pin GPIO_PIN_6
#define CS_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
