/*
 * sqrt.c
 *
 *  Created on: Aug 8, 2023
 *      Author: hp
 */
#include<stdio.h>
#include<math.h>
int main(){
	float x;
	int a;
	printf("Enter number :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	x =sqrt(a);
	printf("%f",x);
}

