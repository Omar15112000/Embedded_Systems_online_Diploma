/*
 * power_of_number_using_recursion.c
 *
 *  Created on: Aug 4, 2023
 *      Author: hp
 */
#include<stdio.h>

void power(int x,int y){
	 static int z=1 ;
	 z=x*z;
	 y--;
	 if(y!=0){

		 power(x,y);
	 }
	 else{
		 printf("result is %d",z);
	 }
}
int main(){
	int a,b;
		printf("Enter a number :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&a);
		printf("Enter power number(+ve integer) :");
		fflush(stdin);fflush(stdout);
		scanf("%d",&b);
		if (b==0){
			printf("%d ^ %d =1",a,b);
		}
		else {
			power(a,b);
		}
}
