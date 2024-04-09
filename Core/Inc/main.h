/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f7xx_hal.h"

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
#define ICM_SCK4_Pin GPIO_PIN_2
#define ICM_SCK4_GPIO_Port GPIOE
#define ICM_MISO4_Pin GPIO_PIN_5
#define ICM_MISO4_GPIO_Port GPIOE
#define ICM_MOSI4_Pin GPIO_PIN_6
#define ICM_MOSI4_GPIO_Port GPIOE
#define ICM_CS_Pin GPIO_PIN_13
#define ICM_CS_GPIO_Port GPIOC
#define Mouse_MOSI2_Pin GPIO_PIN_1
#define Mouse_MOSI2_GPIO_Port GPIOC
#define Mouse_MISO2_Pin GPIO_PIN_2
#define Mouse_MISO2_GPIO_Port GPIOC
#define Mouse_CS_Pin GPIO_PIN_3
#define Mouse_CS_GPIO_Port GPIOC
#define Motor2_EncA_Pin GPIO_PIN_0
#define Motor2_EncA_GPIO_Port GPIOA
#define Motor2_EncB_Pin GPIO_PIN_1
#define Motor2_EncB_GPIO_Port GPIOA
#define Motor1_Curr_Pin GPIO_PIN_2
#define Motor1_Curr_GPIO_Port GPIOA
#define Motor2_Curr_Pin GPIO_PIN_3
#define Motor2_Curr_GPIO_Port GPIOA
#define Motor3_Curr_Pin GPIO_PIN_4
#define Motor3_Curr_GPIO_Port GPIOA
#define Motor4_Curr_Pin GPIO_PIN_5
#define Motor4_Curr_GPIO_Port GPIOA
#define Motor3_EncA_Pin GPIO_PIN_6
#define Motor3_EncA_GPIO_Port GPIOA
#define Motor3_EncB_Pin GPIO_PIN_7
#define Motor3_EncB_GPIO_Port GPIOA
#define ADC_Battery_Pin GPIO_PIN_0
#define ADC_Battery_GPIO_Port GPIOB
#define MCU_RX7_Pin GPIO_PIN_7
#define MCU_RX7_GPIO_Port GPIOE
#define MCU_TX7_Pin GPIO_PIN_8
#define MCU_TX7_GPIO_Port GPIOE
#define Motor1_ChA_Pin GPIO_PIN_9
#define Motor1_ChA_GPIO_Port GPIOE
#define Motor1_ChB_Pin GPIO_PIN_11
#define Motor1_ChB_GPIO_Port GPIOE
#define Motor1_OCLn_Pin GPIO_PIN_12
#define Motor1_OCLn_GPIO_Port GPIOE
#define Motor2_OCLn_Pin GPIO_PIN_13
#define Motor2_OCLn_GPIO_Port GPIOE
#define Motor3_OCLn_Pin GPIO_PIN_14
#define Motor3_OCLn_GPIO_Port GPIOE
#define Motor4_OCLn_Pin GPIO_PIN_15
#define Motor4_OCLn_GPIO_Port GPIOE
#define Mouse_SCK2_Pin GPIO_PIN_10
#define Mouse_SCK2_GPIO_Port GPIOB
#define Fan_PWM_Pin GPIO_PIN_14
#define Fan_PWM_GPIO_Port GPIOB
#define Motor4_Dir_Pin GPIO_PIN_15
#define Motor4_Dir_GPIO_Port GPIOB
#define Motor3_DIR_Pin GPIO_PIN_8
#define Motor3_DIR_GPIO_Port GPIOD
#define Motor2_DIR_Pin GPIO_PIN_9
#define Motor2_DIR_GPIO_Port GPIOD
#define Motor1_DIR_Pin GPIO_PIN_10
#define Motor1_DIR_GPIO_Port GPIOD
#define Motor4_EncA_Pin GPIO_PIN_12
#define Motor4_EncA_GPIO_Port GPIOD
#define Motor4_EncB_Pin GPIO_PIN_13
#define Motor4_EncB_GPIO_Port GPIOD
#define Motor1_PWM_Pin GPIO_PIN_6
#define Motor1_PWM_GPIO_Port GPIOC
#define Motor2_PWM_Pin GPIO_PIN_7
#define Motor2_PWM_GPIO_Port GPIOC
#define Motor3_PWM_Pin GPIO_PIN_8
#define Motor3_PWM_GPIO_Port GPIOC
#define Motor4_PWM_Pin GPIO_PIN_9
#define Motor4_PWM_GPIO_Port GPIOC
#define VCP_RX4_Pin GPIO_PIN_11
#define VCP_RX4_GPIO_Port GPIOA
#define VCP_TX4_Pin GPIO_PIN_12
#define VCP_TX4_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
