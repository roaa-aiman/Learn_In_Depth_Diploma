/*
 * Main_Algorithm.h
 *
 *  Created on: Nov 16, 2023
 *      Author: roaa aiman

 */

#ifndef MAIN_ALGORITHM_H_
#define MAIN_ALGORITHM_H_
#include "state.h"

// Define Status
enum {
	MA_waiting,
	MA_High_Pressure
}MA_Status;

// Declare Status Functions CA
ST_STATE_define(MA_waiting);
ST_STATE_define(MA_High_Pressure);

// STATE Pointer to Function
extern void (*MA_state)();


#endif /* MAIN_ALGORITHM_H_ */
