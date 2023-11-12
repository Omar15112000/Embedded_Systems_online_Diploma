/*
 * warning_act.c
 *
 *  Created on: Nov 12, 2023
 *      Author: omar
 */

#include "driver.h"
#include"warning_act.h"
extern void(*check)();
void warning_action(){

	check();
}

void danger_pressure(){
	 Set_Alarm_actuator(reset);
	 Delay(1000000);

}


void safe_pressure(){
	Set_Alarm_actuator(set);
	Delay(1000000);
}
