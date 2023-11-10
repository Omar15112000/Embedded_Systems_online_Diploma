/*
 * DC_motor.c
 *
 *  Created on: Nov 10, 2023
 *      Author: hp
 */

#include"DC_motor.h"



void dc_motor_init(){

	printf("\n------motor_init_ DONE ----");

}



void dc_motor_idle(int s){

	printf("\n********the motor idle the speed : %d  *******" ,  s);
	//return 0;

}


void dc_motor_busy(int s){

	printf("\n+++++++the motor is moving the speed : %d  +++++++" , s);
	//return 0 ;
}




