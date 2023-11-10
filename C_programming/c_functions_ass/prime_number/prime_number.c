/*
 * prime_number.c
 *
 *  Created on: Aug 3, 2023
 *      Author: hp
 */
#include<stdio.h>

void prime(int x,int y){
	int i,j;
	printf("prime numbers between %d and %d are : ",x,y);
	for(i=x;i<=y;i++){
		int prime_num=1;
		for(j=1;j<=y;j++){
			if(i%j==0&&j!=1&&i!=j){
				prime_num=0;
				break;
			}
			}
		if(prime_num==1){
			printf("%d ",i);
		}
		}
	}

int main(){
	int a,b;
	printf("enter two numbers (intervals):");
	fflush(stdin);fflush(stdout);
	scanf("%d""%d",&a,&b);
	prime(a,b);
}

