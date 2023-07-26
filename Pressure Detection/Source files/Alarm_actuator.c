#include "Alarm_actuator.h"
#include "driver.h"

#define alarm_duration 2000000

void (*alarm_actuator_state)();

void start_alarm(){
	alarm_actuator_state = STATE(alarm_start);
}

void stop_alarm(){
	alarm_actuator_state = STATE(alarm_stop);
}

STATE_Define(alarm_start){
	Alarm_Actuator_State_Id = alarm_start;
	Set_Alarm_actuator(0);
	Delay(alarm_duration);
	alarm_actuator_state = STATE(alarm_waiting);
}

STATE_Define(alarm_stop){
	Alarm_Actuator_State_Id = alarm_stop;
	Set_Alarm_actuator(1);
	alarm_actuator_state = STATE(alarm_waiting);
}

STATE_Define(alarm_waiting){
	Alarm_Actuator_State_Id = alarm_waiting;
	

}


void alarm_actuator_init(){
	alarm_actuator_state = STATE(alarm_waiting);
}
