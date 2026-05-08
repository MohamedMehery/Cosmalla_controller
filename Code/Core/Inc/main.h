/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
#define RED_Pin GPIO_PIN_13
#define RED_GPIO_Port GPIOC
#define GREEN_Pin GPIO_PIN_14
#define GREEN_GPIO_Port GPIOC
#define BLUE_Pin GPIO_PIN_15
#define BLUE_GPIO_Port GPIOC
#define RESERVED_0_Pin GPIO_PIN_0
#define RESERVED_0_GPIO_Port GPIOB
#define RESERVED_1_Pin GPIO_PIN_1
#define RESERVED_1_GPIO_Port GPIOB
#define RESERVED_2_Pin GPIO_PIN_2
#define RESERVED_2_GPIO_Port GPIOB
#define RELAY_CONTROL_4_Pin GPIO_PIN_8
#define RELAY_CONTROL_4_GPIO_Port GPIOA
#define CAN_SILENCE_Pin GPIO_PIN_9
#define CAN_SILENCE_GPIO_Port GPIOA
#define RESERVED_3_Pin GPIO_PIN_4
#define RESERVED_3_GPIO_Port GPIOB
#define RELAY_CONTROL_1_Pin GPIO_PIN_5
#define RELAY_CONTROL_1_GPIO_Port GPIOB
#define RELAY_CONTROL_2_Pin GPIO_PIN_6
#define RELAY_CONTROL_2_GPIO_Port GPIOB
#define RELAY_CONTROL_3_Pin GPIO_PIN_7
#define RELAY_CONTROL_3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
