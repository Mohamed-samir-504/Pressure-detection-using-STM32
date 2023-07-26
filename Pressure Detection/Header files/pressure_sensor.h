
#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_

#include "state.h"

extern void (*PS_state)();

enum
{
	PS_reading,
	PS_waiting
}Pressure_Sensor_State_Id;

STATE_Define(PS_reading);
STATE_Define(PS_waiting);

void pressure_sensor_init();
#endif /* PRESSURE_SENSOR_H_ */
