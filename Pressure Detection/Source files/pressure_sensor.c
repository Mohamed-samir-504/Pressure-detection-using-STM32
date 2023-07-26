#include "pressure_sensor.h"
#include "driver.h"
#include "stdlib.h"
#define Sensor_pull_time 100000

void (*PS_state)();
int pval = 0;

STATE_Define(PS_reading){
	Pressure_Sensor_State_Id = PS_reading;
	pval = getPressureVal();
	set_pressure_val(pval);
	PS_state = STATE(PS_waiting);
}

STATE_Define(PS_waiting){
	Pressure_Sensor_State_Id = PS_waiting;
	Delay(Sensor_pull_time);
	PS_state = STATE(PS_reading);
}


void pressure_sensor_init(){
	PS_state = STATE(PS_reading);
}

