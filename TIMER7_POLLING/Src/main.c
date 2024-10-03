#include <LED.h>
#include <stdint.h>
#include <stdio.h>
#include <TIMER.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void) {
	SystemInit();
	Timer_Init();
	LedInit(LED_RED_PIN);
	LedInit(LED_ORANGE_PIN);
	LedInit(LED_GREEN_PIN);
	LedInit(LED_BLUE_PIN);
	while(1) {
		LedOn(LED_RED_PIN);
		LedOn(LED_ORANGE_PIN);
		LedOn(LED_BLUE_PIN);
		LedOn(LED_GREEN_PIN);
		Timer_Delay(3000);

		LedOff(LED_RED_PIN);
		LedOff(LED_ORANGE_PIN);
		LedOff(LED_BLUE_PIN);
		LedOff(LED_GREEN_PIN);
		Timer_Delay(7000);

	}
	return 0;
}
