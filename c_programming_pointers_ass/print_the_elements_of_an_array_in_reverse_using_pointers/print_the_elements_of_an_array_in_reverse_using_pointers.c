/*
 * print_the_elements_of_an_array_in_reverse_using_pointers.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hp
 */
#include<stdio.h>
int main(){
	int x,i;
	int array[15];
	int* ptr = array;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter the %d elements \n",x);
	for(i=0;i<x;i++){
		static int count =1;
		fflush(stdin);fflush(stdout);
		printf("Element %d :",count);
		fflush(stdin);fflush(stdout);
		scanf("%d", &array[i]);
		count++;
	}
	printf("the reversed array is : \n");
	for(i=x-1;i>=0;i--){

		ptr= array+i;
		printf(" %d\n", *ptr);

	}
}

