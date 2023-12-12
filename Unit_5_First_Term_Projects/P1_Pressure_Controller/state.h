/*
 * state.h
 *
 *  Created on: Nov 15, 2023
 *      Author: SMART
 */

#ifndef STATE_H_
#define STATE_H_
#include"GPIO.h"

// Automatic STATE Function generated
#define ST_STATE_define(_statFUN_) void ST_##_statFUN_()
#define ST_STATE(_statFUN_) ST_##_statFUN_

//States Connections
void set_pressure_val(int pressure_value);
void High_Pressure_Detection(int state);
void start_alarm(void);
void stop_alarm(void);

#endif /* STATE_H_ */

