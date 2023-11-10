/*
 * reverse_string_without_library.c
 *
 *  Created on: Aug 2, 2023
 *      Author: hp
 */
#include<stdio.h>
int main (){
	int i;
	int length=0;
	char a[100];
	char b[100];
	printf("enter a string :");
	fflush(stdin);fflush(stdout);
	gets(a);
	for(i=0;i<100;i++){
		if(a[i]!=0){
			length=length+1;
		}
		else{
			break;
		}
	}
	for(i=0;i<length;i++){
		b[i]=a[length-i-1];
	}
	b[length]='\0';

	printf("the reversed string is : %s",b);
}

