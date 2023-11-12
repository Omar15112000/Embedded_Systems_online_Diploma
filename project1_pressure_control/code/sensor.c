/*
 * sensor.c
 *
 *  Created on: Nov 12, 2023
 *      Author: hp
 */
#include "driver.h"
#include "pressure_check.h"
#include "sensor.h"

// read data from sensor
void sensor_reading(){
	int pressure_value =  getPressureVal();
	//check if pressure is more than threshold or not
	pressure_check(pressure_value);
}

