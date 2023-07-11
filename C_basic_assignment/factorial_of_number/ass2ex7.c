/*
 * ass2ex7.c
 *
 *  Created on: Jul 11, 2023
 *      Author: hp
 */
#include <stdio.h>

int main() {
	int b,a;
	int fact=1;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	if(a<a*-1){
		printf("factorial for negative numbers does not exist ");
	}
	else{
		for(b=1;b<=a;b++){
				fact=b*fact;

			}
			printf("factorial of integer is = %d",fact);
	}
}




