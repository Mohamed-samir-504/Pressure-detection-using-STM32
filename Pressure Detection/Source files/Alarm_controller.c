#include "Alarm_controller.h"
#include "driver.h"


void (*alarm_controller_state)();

void high_pressure(){
	alarm_controller_state = STATE(alarm_on);
}


STATE_Define(alarm_on){
	Alarm_Controller_State_Id = alarm_on;
	start_alarm();
	alarm_controller_state = STATE(alarm_off);
}

STATE_Define(alarm_off){
	Alarm_Controller_State_Id = alarm_off;
	stop_alarm();
	alarm_controller_state = STATE(waiting);
}

STATE_Define(waiting){
	Alarm_Controller_State_Id = waiting;

}

