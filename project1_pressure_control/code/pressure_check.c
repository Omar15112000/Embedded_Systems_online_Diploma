/*
 * pressure_check.c
 *
 *  Created on: Nov 12, 2023
 *      Author: hp
 */
#include "pressure_check.h"
#include "driver.h"
#include "warning_act.h"

int threshold = 20;

extern void (*check)();
void pressure_check(int pressure_value){
	// check the pressure
	//assign the pointer to the function we need
	(pressure_value<=threshold) ? (check = safe_pressure) : (check = danger_pressure);
	//call for action
	warning_action();

}




