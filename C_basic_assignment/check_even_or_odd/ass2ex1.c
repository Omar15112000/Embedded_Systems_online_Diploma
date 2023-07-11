/*
 * ass2ex1.c
 *
 *  Created on: Jul 10, 2023
 *      Author: hp
 */
#include <stdio.h>
int main ()
{
	int a;
	printf("Enter an integer you want to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	if (a%2==0){
		printf("%d is even number",a);
	}
		else{
		printf("%d is odd number",a);
		}

}
