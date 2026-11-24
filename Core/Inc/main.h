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
#include "stm32f4xx_hal.h"

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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define SENS_1F_Pin GPIO_PIN_0
#define SENS_1F_GPIO_Port GPIOC
#define SENS_1F_DOWN_STOP_Pin GPIO_PIN_1
#define SENS_1F_DOWN_STOP_GPIO_Port GPIOC
#define SENS_2F_Pin GPIO_PIN_2
#define SENS_2F_GPIO_Port GPIOC
#define SENS_2F_UP_STOP_Pin GPIO_PIN_3
#define SENS_2F_UP_STOP_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define SW_1F_Pin GPIO_PIN_4
#define SW_1F_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define SERVO_1_Pin GPIO_PIN_6
#define SERVO_1_GPIO_Port GPIOA
#define SERVO_3_Pin GPIO_PIN_7
#define SERVO_3_GPIO_Port GPIOA
#define SENS_3F_Pin GPIO_PIN_4
#define SENS_3F_GPIO_Port GPIOC
#define STEP_2F_EN_Pin GPIO_PIN_5
#define STEP_2F_EN_GPIO_Port GPIOC
#define SENS_3F_UP_STOP_Pin GPIO_PIN_0
#define SENS_3F_UP_STOP_GPIO_Port GPIOB
#define SW_2F_UP_Pin GPIO_PIN_1
#define SW_2F_UP_GPIO_Port GPIOB
#define SW_3F_DN_Pin GPIO_PIN_2
#define SW_3F_DN_GPIO_Port GPIOB
#define STEP_1F_EN_Pin GPIO_PIN_10
#define STEP_1F_EN_GPIO_Port GPIOB
#define DOOR_OPEN_3F_Pin GPIO_PIN_12
#define DOOR_OPEN_3F_GPIO_Port GPIOB
#define DOOR_CLOSE_3F_Pin GPIO_PIN_13
#define DOOR_CLOSE_3F_GPIO_Port GPIOB
#define SENS_2F_DOWN_STOP_Pin GPIO_PIN_14
#define SENS_2F_DOWN_STOP_GPIO_Port GPIOB
#define DOOR_OPEN_1F_Pin GPIO_PIN_6
#define DOOR_OPEN_1F_GPIO_Port GPIOC
#define DOOR_CLOSE_1F_Pin GPIO_PIN_7
#define DOOR_CLOSE_1F_GPIO_Port GPIOC
#define DOOR_OPEN_2F_Pin GPIO_PIN_8
#define DOOR_OPEN_2F_GPIO_Port GPIOC
#define DOOR_CLOSE_2F_Pin GPIO_PIN_9
#define DOOR_CLOSE_2F_GPIO_Port GPIOC
#define STEP_IN1_Pin GPIO_PIN_8
#define STEP_IN1_GPIO_Port GPIOA
#define STEP_IN2_Pin GPIO_PIN_9
#define STEP_IN2_GPIO_Port GPIOA
#define STEP_IN3_Pin GPIO_PIN_10
#define STEP_IN3_GPIO_Port GPIOA
#define STEP_IN4_Pin GPIO_PIN_11
#define STEP_IN4_GPIO_Port GPIOA
#define STEP_3F_EN_Pin GPIO_PIN_12
#define STEP_3F_EN_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SW_2F_DN_Pin GPIO_PIN_15
#define SW_2F_DN_GPIO_Port GPIOA
#define DOOR_ERR_1F_Pin GPIO_PIN_10
#define DOOR_ERR_1F_GPIO_Port GPIOC
#define DOOR_ERR_2F_Pin GPIO_PIN_11
#define DOOR_ERR_2F_GPIO_Port GPIOC
#define DOOR_ERR_3F_Pin GPIO_PIN_12
#define DOOR_ERR_3F_GPIO_Port GPIOC
#define SW_1F_UP_Pin GPIO_PIN_2
#define SW_1F_UP_GPIO_Port GPIOD
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define M_IN1_Pin GPIO_PIN_5
#define M_IN1_GPIO_Port GPIOB
#define M_IN2_Pin GPIO_PIN_7
#define M_IN2_GPIO_Port GPIOB
#define SW_2F_Pin GPIO_PIN_8
#define SW_2F_GPIO_Port GPIOB
#define SW_3F_Pin GPIO_PIN_9
#define SW_3F_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
