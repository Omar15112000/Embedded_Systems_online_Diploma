/*
 * factorial_using_recursion.c
 *
 *  Created on: Aug 4, 2023
 *      Author: hp
 */
#include<stdio.h>

void factorial(int x){
	static int i=1;
	i=x*i;
	x--;
	if(x==0){
		printf("factorial =%d",i);
	}
	else{
	factorial(x);
	}
}

int main(){
	int a;
	printf("Enter a number :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	if(a==0){
	printf("factorial of zero is one");
	}
	else{
		factorial(a);

	}
}

