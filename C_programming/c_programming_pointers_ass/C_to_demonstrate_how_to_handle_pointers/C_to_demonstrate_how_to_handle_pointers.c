/*
 *  C_to_demonstrate_how_to_handle_pointers.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hp
 */
#include<stdio.h>
int main (){
	int m =29;
	printf("the address of m is : %p\nthe value of m is: %d\n",&m,m);
	int* ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("the address of pointer ab is : %p\nthe content of pointer ab is: %d\n",ab,*ab);
	m=34;
	printf("The value of m assigned to 34 now.\n");
	printf("the address of pointer ab is : %p\nthe content of pointer ab is: %d\n",ab,*ab);
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("the address of m is : %p\nthe value of m is: %d\n",&m,m);
	printf("the address of the pointer is %p ",&ab);




}

