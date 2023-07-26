#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "Alarm_actuator.h"
#include "Alarm_controller.h"
#include "detection.h"
#include "pressure_sensor.h"


void setup(){
	GPIO_INITIALIZATION();
	alarm_actuator_init();
	pressure_sensor_init();
	detection_state = STATE(pressure_detected);
	alarm_controller_state = STATE(alarm_off);
}
void main(){
	setup();
	while (1)
	{
		PS_state();
		detection_state();
		alarm_controller_state();
		alarm_actuator_state();
	}

}
