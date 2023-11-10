/*
 * sum.c
 *
 *  Created on: Aug 8, 2023
 *      Author: hp
 */

#include<stdio.h>

void sum(int y){
	static int answer = 0;

	while (y>0){
		int z=y%10;
		answer=z+answer;
		y/=10;
	}

	printf("%d\n",answer);

}



int main(){
	int a;
	printf("Enter number :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	sum(a);
}
