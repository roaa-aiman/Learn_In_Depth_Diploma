/*
 * Alarm_Actuator.h
 *
 *  Created on: Nov 16, 2023
 *      Author: roaa aiman 
 */

#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_

#include "state.h"
// Define Status
enum {
	AA_init ,
	AA_waiting,
	AA_alarm_on,
	AA_alarm_off
}AA_Status;

// Declare Status Functions CA
ST_STATE_define(AA_init);
ST_STATE_define(AA_waiting);
ST_STATE_define(AA_alarm_on);
ST_STATE_define(AA_alarm_on);

// STATE Pointer to Function
extern void (*AA_state)();



#endif /* ALARM_ACTUATOR_H_ */
