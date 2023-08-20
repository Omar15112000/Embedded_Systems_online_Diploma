/*
 * rev_number.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hp
 */
#include<stdio.h>
int main(){
	int a,i;
	int b[100];
	printf("enter number of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("Enter the numbers :\n");

	for(i=0;i<a;i++){
		fflush(stdin);fflush(stdout);
		scanf("%d",&b[i]);
	}
	printf("the reversed elements :\n");
	for(i=a-1;i>=0;i--){
		fflush(stdin);fflush(stdout);
		printf("%d",b[i]);

	}

}

