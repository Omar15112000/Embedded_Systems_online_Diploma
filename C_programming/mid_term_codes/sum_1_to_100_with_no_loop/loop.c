/*
 * loop.c
 *
 *  Created on: Aug 9, 2023
 *      Author: hp
 */

#include<stdio.h>
void sum(int x){
	static int  z=0;
	if(x<=100){
		z=z+x;
		sum(x+1);
	}
	else{
		printf("the sum is : %d",z);
	}

}



int main(){
	int a=1;
	sum(a);
}

