/*
 * rev_sentence.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hp
 */

#include<stdio.h>
#include<string.h>
int main(){
	int a,i;
	char b[100];
	printf("enter sentence :");
	fflush(stdin);fflush(stdout);
	gets(b);
	a=strlen(b)-1;
	printf("the reversed sentence is :");

	for(i=a;i>=0;i--){
		printf("%c",b[i]);
	}


}



