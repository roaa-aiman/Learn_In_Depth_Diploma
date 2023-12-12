/*
 * Alarm_Monitor.h
 *
 *  Created on: Nov 16, 2023
 *      Author: roaa aiman 
 */

#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

#include "state.h"

// Define Status
enum {
	AM_alarm_off,
	AM_alarm_on,
	AM_waiting
}AM_Status;

// Declare Status Functions CA
ST_STATE_define(AM_alarm_off);
ST_STATE_define(AM_alarm_on);
ST_STATE_define(AM_waiting);

// STATE Pointer to Function
extern void (*AM_state)();



#endif /* ALARM_MONITOR_H_ */
