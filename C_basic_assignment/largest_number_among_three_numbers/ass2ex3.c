/*
 * ass2ex3.c
 *
 *  Created on: Jul 11, 2023
 *      Author: hp
 */
#include<stdio.h>

int main(){
	float a,b,c;
	printf("Enter three numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b&&a>c){
		printf("Largest number is :%f ",a);
	}
	else if (b>a&&b>c){
		printf("Largest number is :%f ",b);
	}
	else if (c>a&&c>b){
		printf("Largest number is :%f ",c);

	}
}


