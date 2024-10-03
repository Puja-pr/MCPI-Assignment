#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"
#include "uart.h"


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{

	char str[30];
	int ch;
	SystemInit();

	LedInit(LED_RED_PIN);
	LedInit(LED_BLUE_PIN);
	UartInit(9600);
	UartPuts("HELLO!");

	do
	{
		UartPuts("enter your choice\r\n1 for red led on \r\n2 for red led off\r\n3 for blue led on\r\n4 for blue led off\r\n5 for exit");
		UartGets(str);
		sscanf(str, "%d", &ch);
		UartPutch(ch);

		switch(ch)
		{
		case 1:LedOn(LED_RED_PIN);
					break;
		case 2:LedOff(LED_RED_PIN);
					break;
		case 3:LedOn(LED_BLUE_PIN);
					break;
		case 4:LedOff(LED_BLUE_PIN);
					break;
		case 5:UartPuts("Bye Bye\r\n");
					break;
		}
	}while (ch != 5);

	return 0;
}





