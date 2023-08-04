/*
 * program_to_insert_element_in_array.c
 *
 *  Created on: Jul 31, 2023
 *      Author: hp
 */
#include<stdio.h>
int main(){
	int a,i,x,y;
	int b[100];
	printf("enter number of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	for(i=0;i<a;i++){
		b[i]=i+1;
	}
	for(i=0;i<a;i++){
			printf("%d",b[i]);
	}
	printf("\n enter element to be inserted :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("\n enter the location :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	b[y]=x;
	for(i=0;i<a;i++){
				printf("%d",b[i]);
	}
}


