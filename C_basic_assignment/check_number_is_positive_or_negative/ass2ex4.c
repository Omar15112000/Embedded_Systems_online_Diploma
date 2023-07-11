/*
 * ass2ex4.c
 *
 *  Created on: Jul 11, 2023
 *      Author: hp
 */
#include<stdio.h>

int main(){
	float a;
	printf("Enter number : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	if(a>a*-1){
		printf("number is positive ");
	}
	else if (a<a*-1){
		printf("number is negative ");
	}
	else{
		printf("you entered zero ");

	}
}

