/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MODE_SW_Pin GPIO_PIN_3
#define MODE_SW_GPIO_Port GPIOE
#define WALK_INTERVAL_Pin GPIO_PIN_4
#define WALK_INTERVAL_GPIO_Port GPIOE
#define OUT_OF_SERVICE_Pin GPIO_PIN_5
#define OUT_OF_SERVICE_GPIO_Port GPIOE
#define YELLOW_LAMP_Pin GPIO_PIN_2
#define YELLOW_LAMP_GPIO_Port GPIOC
#define GREEN_LAMP_Pin GPIO_PIN_4
#define GREEN_LAMP_GPIO_Port GPIOC
#define BUTTON1_Pin GPIO_PIN_2
#define BUTTON1_GPIO_Port GPIOB
#define BUTTON1_EXTI_IRQn EXTI2_IRQn
#define RED_LAMP_Pin GPIO_PIN_14
#define RED_LAMP_GPIO_Port GPIOB
#define BUTTON2_Pin GPIO_PIN_15
#define BUTTON2_GPIO_Port GPIOB
#define BUTTON2_EXTI_IRQn EXTI15_10_IRQn
#define WALK_Pin GPIO_PIN_12
#define WALK_GPIO_Port GPIOD
#define DONT_WALK_Pin GPIO_PIN_13
#define DONT_WALK_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
