
#ifndef ALARM_CONTROLLER_H_
#define ALARM_CONTROLLER_H_

#include "state.h"
extern void (*alarm_controller_state)();

enum
{
	alarm_on,
	alarm_off,
	waiting
}Alarm_Controller_State_Id;

STATE_Define(alarm_on);
STATE_Define(alarm_off);
STATE_Define(waiting);

#endif /* ALARM_CONTROLLER_H_ */
