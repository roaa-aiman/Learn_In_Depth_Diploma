/*
 * Main_Algorithm.c
 *
 *  Created on: Nov 16, 2023
 *      Author: roaa aiman
 */

#include "Main_Algorithm.h"
// Global Variable
static int MA_Pressure_value = 0;
static int MA_threshold = 20;

// STATE Pointer to function
void (*MA_state)();

void Set_Pressure_Val(int Pressure_value)
{
	// set the value of pressure sensor
	MA_Pressure_value = Pressure_value ;

	//state change
	( MA_Pressure_value <= MA_threshold ) ? (MA_state = ST_STATE(MA_waiting)) : (MA_state = ST_STATE(MA_High_Pressure));

}
// STATE Functions
ST_STATE_define(MA_waiting)
{
	// State_Name
	MA_Status = MA_waiting;

	//check event  and change state
	MA_state = ST_STATE(MA_waiting);
}
ST_STATE_define(MA_High_Pressure)
{
	// State_Name
	MA_Status = MA_High_Pressure;
    //action
	High_Pressure_Detection(1);
	//check event  and change state
	MA_state = ST_STATE(MA_waiting);
}



