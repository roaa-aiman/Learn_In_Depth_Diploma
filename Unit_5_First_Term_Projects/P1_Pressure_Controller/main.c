/*
 * main.c
 *
 *  Created on: Nov 17, 2023
 *      Author: SMART
 */

#include "GPIO.h"
#include "Pressure_Sensor.h"
#include "Main_Algorithm.h"
#include "Alarm_Monitor.h"
#include "Alarm_Actuator.h"

void setup(void)
{
	// init all the drivers
	// init IRQ ....
	// init HAL US_Driver DC_Driver
	// init BLOCK
	// Set States pointers for each block
	PS_state = ST_STATE(PS_init);
	MA_state = ST_STATE(MA_High_Pressure);
	AM_state = ST_STATE(AM_alarm_off);
	AA_state = ST_STATE(AA_init);

	//GPIO Initlization
	GPIO_INITIALIZATION ();
}

int main(void)
{
	setup();

	while(1)
	{
		// Call state for each block
		PS_state();
		MA_state();
		AM_state();
		AA_state();

	}
	return 0;
}
