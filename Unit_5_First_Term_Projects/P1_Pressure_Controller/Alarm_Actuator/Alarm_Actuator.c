/*
 * Alarm_Actuator.c
 *
 *  Created on: Nov 16, 2023
 *      Author: roaa aiman
 */
#include "Alarm_Actuator.h"


// STATE Pointer to function
void (*AA_state)();

// STATE Functions
ST_STATE_define(AA_init)
{
	    // State_Name
		AA_Status = AA_init ;

		//check event and change state
		AA_state = ST_STATE(AA_waiting);
}

ST_STATE_define(AA_waiting)
{
	    // State_Name
		AA_Status = AA_waiting;
}

ST_STATE_define(AA_alarm_off)
{
	    // State_Name
		AA_Status = AA_alarm_off;

		// state action
		Set_Alarm_actuator(1);

		// go to waiting state again
		AA_state = ST_STATE(AA_waiting);
}

ST_STATE_define(AA_alarm_on)
{
	    // State_Name
		AA_Status = AA_alarm_on;

		//state action
		Set_Alarm_actuator(0);

		// go to waiting state again
		AA_state = ST_STATE(AA_waiting);
}

void start_alarm(void)
{
	AA_state = ST_STATE(AA_alarm_on);
}
void stop_alarm(void)
{
	AA_state = ST_STATE(AA_alarm_off);
}

