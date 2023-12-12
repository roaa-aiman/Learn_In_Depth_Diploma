/*
 * state.h
 *
 *  Created on: Nov 5, 2023
 *      Author: SMART
 */


#ifndef STATE_H_
#define STATE_H_

#include "stdlib.h"

#define Dprintf(...)	{fflush(stdout); fflush(stdin);\
						printf(__VA_ARGS__);\
						fflush(stdout); fflush(stdin);}

// Automatic STATE Function generated
#define ST_STATE_define(_statFUN_) void ST_##_statFUN_()
#define ST_STATE(_statFUN_) ST_##_statFUN_

//States Connections
void US_Set_distance(int distance);
void DC_Set_speed(int speed);





#endif /* STATE_H_ */
