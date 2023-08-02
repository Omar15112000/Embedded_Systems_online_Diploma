/*
 * calculate_average_using_arrays.c
 *
 *  Created on: Jul 31, 2023
 *      Author: hp
 */
#include<stdio.h>
int main(){
	int a,i;
	float av;
	float b[100];
	float sum=0;
    printf("enter number of data :");
	fflush(stdin);fflush(stdout);
    scanf("%d",&a) ;

    for(i=0;i<a;i++){

    	printf("enter the number :");
    	fflush(stdin);fflush(stdout);
    	scanf("%f",&b[i]);

    }
    for(i=0;i<a;i++){
    	sum=b[i]+sum;

    }
    av=sum/a;
    printf("average :%f",av);



}

