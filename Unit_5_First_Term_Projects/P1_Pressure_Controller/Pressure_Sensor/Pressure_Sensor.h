/*
 * Pressure_Sensor.h
 *
 *  Created on: Nov 15, 2023
 *      Author: roaa aiman 
 */
#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_
#include "state.h"

// Define Status
enum {
	PS_init,
	PS_reading,
	PS_waiting
}PS_Status;

// Declare Status Functions Pressure sensor
ST_STATE_define(PS_reading);
ST_STATE_define(PS_waiting);
ST_STATE_define(PS_init);

// STATE Pointer to Function
extern void (*PS_state)();

#endif /* PRESSURE_SENSOR_H_ */
