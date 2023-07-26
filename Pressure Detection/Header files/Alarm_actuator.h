

#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_

#include "state.h"

extern void (*alarm_actuator_state)();
enum{
	alarm_start,
	alarm_stop,
	alarm_waiting
}Alarm_Actuator_State_Id;

STATE_Define(alarm_start);
STATE_Define(alarm_stop);
STATE_Define(alarm_waiting);

void alarm_actuator_init();

#endif /* ALARM_ACTUATOR_H_ */
