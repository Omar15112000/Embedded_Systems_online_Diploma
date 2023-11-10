/*
 * main.c
 *
 *  Created on: Nov 9, 2023
 *      Author: hp
 */


#include"ultra_sonic.h"
#include"DC_motor.h"
#include"CA.h"



void setup(){
	ultra_sonic_init();
	dc_motor_init();
	state = wait;

}


void main (){

	setup();
	//state = wait;

	while(1){

		state ();
	}
}

