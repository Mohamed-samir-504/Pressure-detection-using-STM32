

#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdlib.h"


#define STATE_Define(_StateFun_)	void ST_##_StateFun_()
#define STATE(_StateFun_)			ST_##_StateFun_

//states connections
void set_pressure_val(int pval);
void high_pressure();
void start_alarm();
void stop_alarm();

#endif /* STATE_H_ */
