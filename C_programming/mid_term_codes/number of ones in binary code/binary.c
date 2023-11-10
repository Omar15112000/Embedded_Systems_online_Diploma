/*
 * binary.c
 *
 *  Created on: Aug 9, 2023
 *      Author: hp
 */

#include<stdio.h>
int main(){
	int a,i;
	int array[10];
	int sum=0;
	printf("Enter number :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	for(i=0;a>0;i++){
		array[i]=a%2;
		a/=2;
	}
	for(i=0;i<10;i++){
		if(array[i]==1){
			sum=sum+1;
		}
	}
	printf("%d",sum);


}

