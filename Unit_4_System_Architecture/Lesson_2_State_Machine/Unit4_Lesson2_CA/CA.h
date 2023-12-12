/*
 * CA.h
 *
 *  Created on: Nov 5, 2023
 *      Author: Roaa Aiman
 */

#ifndef CA_H_
#define CA_H_
#include "state.h"

// Define Status
enum {
	CA_waiting,
	CA_driving
}CA_State_id;

// Declare Status Functions CA
ST_STATE_define(CA_waiting);
ST_STATE_define(CA_driving);

// STATE Pointer to Function
extern void (*CA_state)();



#endif /* CA_H_ */
