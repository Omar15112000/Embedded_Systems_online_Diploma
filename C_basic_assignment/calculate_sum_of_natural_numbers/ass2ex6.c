/*
 * ass2ex6.c
 *
 *  Created on: Jul 11, 2023
 *      Author: hp
 */
#include <stdio.h>

int main() {
	int b,a;
	int sum=0;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &a);
	for(b=0;b<=a;b++){
		sum=b;
	}
	printf("sum of integers = %d",sum);
}

