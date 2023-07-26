#include "detection.h"

void (*detection_state)();

int current_pressure_value=0;
int pressure_threshold = 20;


void set_pressure_val(int pval){
	current_pressure_value = pval;
}


STATE_Define(pressure_detected){

	if(current_pressure_value > pressure_threshold){
		high_pressure();

	}

	detection_state = STATE(pressure_detected);
}
