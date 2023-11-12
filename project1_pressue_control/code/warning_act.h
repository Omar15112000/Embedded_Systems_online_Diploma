/*
 * warning_act.h
 *
 *  Created on: Nov 12, 2023
 *      Author: hp
 */

#ifndef WARNING_ACT_H_
#define WARNING_ACT_H_

enum{
	reset,
	set
}warning_id;

void warning_action();
void danger_pressure();

void safe_pressure();


#endif /* WARNING_ACT_H_ */
