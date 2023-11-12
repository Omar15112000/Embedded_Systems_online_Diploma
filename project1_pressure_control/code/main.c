/*
 * main.c
 *
 *  Created on: Nov 12, 2023
 *      Author: hp
 */


#include <stdint.h>
#include <stdio.h>

#include "driver.h"

int main (){
	GPIO_INITIALIZATION();
	while (1)
	{
		sensor_reading();
	}

}
