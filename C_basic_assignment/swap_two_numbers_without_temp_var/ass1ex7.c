/*
 * swap 2 variables without temp var.c
 *
 *  Created on: Jul 10, 2023
 *      Author: hp
 */
#include<stdio.h>

 void swap(float *x,float *y){
	 *x=*x+*y;
	 *y=*x-*y;
	 *x=*x-*y;
 }


int main (){
	float a,b;
	printf("Enter number a : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter number b : ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&b);
		swap(&a,&b);
		printf("After swapping, value of a =%f\nAfter swapping, value of b=%f ",a,b);

}


