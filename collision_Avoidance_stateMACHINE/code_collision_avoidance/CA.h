/*
 * CA.h
 *
 *  Created on: Nov 10, 2023
 *      Author: hp
 */

#ifndef CA_H_
#define CA_H_

enum{
	waiting=0,
	driving=30
}state_id;

void wait();
void drive();

void (*state)();


#endif /* CA_H_ */
