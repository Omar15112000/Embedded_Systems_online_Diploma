/*
 * DC_motor.h
 *
 *  Created on: Nov 10, 2023
 *      Author: hp
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include<stdio.h>
#include<stdlib.h>
enum{
	idle,
	busy
}motor_state;

void dc_motor_init();
void dc_motor_busy(int s);
void dc_motor_idle(int s);



#endif /* DC_MOTOR_H_ */
