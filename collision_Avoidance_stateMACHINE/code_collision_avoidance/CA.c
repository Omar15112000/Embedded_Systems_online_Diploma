/*
 * CA.c
 *
 *  Created on: Nov 10, 2023
 *      Author: hp
 */


#include "DC_motor.h"
#include "ultra_sonic.h"

#include"CA.h"

extern void (*state)();
int threshold = 50;
int distance = 0;
int speed=0;

void wait(){
	state_id = waiting;
	speed = waiting;
	distance =ultra_sonic_busy();

	(distance <= threshold) ? (state = wait ) : (state = drive );

	printf("\n the car is waiting to avoid collision the distance is : %d " , distance );

	if (distance <= threshold){
		dc_motor_idle(waiting);
	}
	else{
		dc_motor_busy(driving);
	}
}

void drive(){
	state_id = driving;
	speed = driving;
	distance =ultra_sonic_busy();

	(distance <= threshold) ? (state = wait) : (state = drive);

	printf("\n the car is ready to move the distance is : %d " , distance );

	if (distance > threshold){
			dc_motor_busy(driving);
		}
	else{
			dc_motor_idle(waiting);
		}
}



