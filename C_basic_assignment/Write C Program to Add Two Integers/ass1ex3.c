/*
 * store 2 numbers with display.c
 *
 *  Created on: Jul 10, 2023
 *      Author: hp
 */
#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter two numbers :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("sum %d",a+b);
}
