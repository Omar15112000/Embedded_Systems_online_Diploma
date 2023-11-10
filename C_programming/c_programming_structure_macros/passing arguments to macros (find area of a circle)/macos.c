/*
 * macos.c
 *
 *  Created on: Aug 16, 2023
 *      Author: hp
 */
#include<stdio.h>
#define pi 3.14
#define area(redius) (pi*radius*radius)
int main(){
	int radius;
	printf("Enter the radius :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&radius);
	printf("the area is : %f" , area(radius));
}

