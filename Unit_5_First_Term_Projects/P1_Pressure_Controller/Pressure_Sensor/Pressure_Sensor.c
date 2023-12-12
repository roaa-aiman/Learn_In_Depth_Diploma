/*
 * Pressure_Sensor.c
 *
 *  Created on: Nov 15, 2023
 *      Author: roaa aiman 
 */

#include "Pressure_Sensor.h"
// Global Variable
static int Pressure_value= 0;

// STATE Pointer to function
void (*PS_state)();

// STATE Functions
ST_STATE_define(PS_reading)
{
	    // State_Name
		PS_Status = PS_reading;

		// State_Action
		Pressure_value=getPressureVal();
		Set_Pressure_Val(Pressure_value);
		//check event and change state
		PS_state = ST_STATE(PS_waiting);
}

ST_STATE_define(PS_init)
{
	    //init Pressure_sensor driver
	    // State_Name
		PS_Status = PS_init;
		// State_Action
		PS_state = ST_STATE(PS_reading);
}

ST_STATE_define(PS_waiting)
{
	    // State_Name
		PS_Status = PS_waiting;

		// Waiting for some time
		Delay(100);

		// go to reading pressure value again
		PS_state = ST_STATE(PS_reading);
}

