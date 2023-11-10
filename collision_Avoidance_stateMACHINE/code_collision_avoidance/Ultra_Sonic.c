/*
 * collision_avoidance.c
 *
 *  Created on: Nov 9, 2023
 *      Author: hp
 */


#include "ultra_sonic.h"

int generate_random(int low ,int high ,int count);
int sensor_distance = 0 ;
void ultra_sonic_init(){

	fflush(stdout);

	printf("\n--Ultra_sonic_init_DONE--");

}


int ultra_sonic_busy(){

	sensor_distance= generate_random(45,55,1);

	return(sensor_distance);

}

int generate_random(int low ,int high ,int count){

	int i;
	for(i=0 ; i < count ; i++){
		int rand_number = (rand)() %(high - low + 1 )+ low;
		return rand_number ;
	}
	return 0;
}






















