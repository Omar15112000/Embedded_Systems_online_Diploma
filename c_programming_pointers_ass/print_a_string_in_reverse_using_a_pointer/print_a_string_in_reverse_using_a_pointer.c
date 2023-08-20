/*
 * print_a_string_in_reverse_using_a_pointer.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hp
 */
#include<stdio.h>
#include<string.h>
int main (){
	int i;
	char array[20];
	char* ptr = array;
	printf("Enter word:");
	fflush(stdin);fflush(stdout);
	gets(array);
	printf("the reversed word is : \n");
	for(i=strlen(array)-1;i>=0;i--){
		ptr = array + i;
		printf("%c",*ptr);

	}
}

