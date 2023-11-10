/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: hp
 */
#include "lifo.h"
#include <stdlib.h>
#include <stdio.h>
unsigned int buffer1[5];

void main(){
	int i ,temp = 0 ;
	lifo_buf_ty uart_lifo , I2c_lifo;
	//static allocation
	lifo_init(&uart_lifo , buffer1 , 5);
	//dynamic allocation
	unsigned int* buffer2 = (unsigned int*) malloc(5 * sizeof(unsigned int));
	lifo_init(&I2c_lifo , buffer2 , 5);
	for ( i = 0 ; i<5 ; i++){
		if(lifo_add_item(&uart_lifo , i) == lifo_no_error)
			printf (" uart_lifo_add : %d \n", i);
	}
	printf("==================\n");
	for ( i = 0 ; i<5 ; i++){
		if(lifo_get_item(&uart_lifo , &temp ) == lifo_no_error)
			printf ("uart_lifo_get : %d \n ", temp);
		}



}





