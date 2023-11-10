/*
 * ultra_sonic.h
 *
 *  Created on: Nov 10, 2023
 *      Author: hp
 */

#ifndef ULTRA_SONIC_H_
#define ULTRA_SONIC_H_
#include<stdio.h>
#include<stdlib.h>
enum{
	busy_sensor,

}us_state;

void ultra_sonic_init();
int ultra_sonic_busy();



#endif /* ULTRA_SONIC_H_ */
