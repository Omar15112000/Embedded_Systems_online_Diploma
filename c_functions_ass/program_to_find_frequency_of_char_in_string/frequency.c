/*
 * frequency.c
 *
 *  Created on: Aug 1, 2023
 *      Author: hp
 */
#include<stdio.h>
#include<string.h>
int main(){
	char a;
	int i;
	int freq =0;
	char word[100];
	printf("enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(word);
	printf("\n enter a char to find frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
	for(i=0;i<strlen(word);i++){
		if(word[i]==a){
			freq=freq+1;
		}
	}
	printf("\n frequency is  :%d ",freq);

}


