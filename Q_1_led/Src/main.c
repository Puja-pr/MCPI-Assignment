/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
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

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
#include "led.h"
int main(void)
{
	SystemInit();
	LedInit(LED_GREEN_PIN);
	LedInit(LED_ORANGE_PIN);
	LedInit(LED_RED_PIN);
	LedInit(LED_BLUE_PIN);
	while(1)
	{
		LedBlink(LED_GREEN_PIN ,100);
		LedBlink(LED_ORANGE_PIN ,100);
		LedBlink(LED_RED_PIN ,100);
		LedBlink(LED_BLUE_PIN ,100);


	}

	return 0;
}
