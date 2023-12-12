/*
 * Alarm_Monitor.c
 *
 *  Created on: Nov 16, 2023
 *      Author: roaa aiman 
 */

#include "Alarm_Monitor.h"
// STATE Pointer to function
void (*AM_state)();

// STATE Functions
ST_STATE_define(AM_waiting)
{
	//state_Name
	AM_Status = AM_waiting;
	//timer for time duration 60s
	Delay(60);
	//check event and change state
	AM_state = ST_STATE(AM_alarm_off);
}

ST_STATE_define(AM_alarm_on)
{
	// State_Name
	AM_Status = AM_alarm_on;

	// State_Action
	start_alarm();

	//check event and change state
	AM_state = ST_STATE(AM_waiting);
}

ST_STATE_define(AM_alarm_off)
{
	// State_Name
	AM_Status = AM_alarm_off;

	// State_Action
	stop_alarm();

	//check event and change state
	AM_state = ST_STATE(AM_waiting);
}

void High_Pressure_Detection(int state )
{
	if (state == 1)
		AM_state = ST_STATE(AM_alarm_on);
	else
		AM_state = ST_STATE(AM_alarm_off);

}
