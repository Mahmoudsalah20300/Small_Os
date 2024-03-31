/*
 * main.c
 *
 *  Created on: Feb 19, 2023
 *      Author: Mahmoud_Ali
 */
#include <util/delay.h>

#include "STD_TYPES.h"
#include "Led_int.h"
#include "PB_int.h"
#include "Dio_int.h"
#include "Port_int.h"
#include "CLCD_int.h"
#include "KPD_int.h"
#include "UART_int.h"
#include "EXTI_int.h"
#include "GIE_int.h"
#include "TIMER1_int.h"
#include "ULTRASONIC_int.h"
#include "OS_int.h"



void LED1(void);
void LED2(void);
void LED3(void);

extern const Port_Configtype Port_ConfigArr[PORT_PINS_CONFIG_ARR_SIZE];

void main(void)
{

	MPort_voidInit(Port_ConfigArr);

	OS_voidCreateTask(0, 100, &LED1);
	OS_voidCreateTask(1, 200, &LED2);
	OS_voidCreateTask(2, 300, &LED3);

	OS_voidStart();
	while(1)
	{

	}

}


void LED1(void)
{

		HLED_voidToggle(LED_BLUE);

}

void LED2(void)
{
	HLED_voidToggle(LED_GREEN);
}

void LED3(void)
{
	HLED_voidToggle(LED_GREEN);
	HLED_voidToggle(LED_RED);
}
