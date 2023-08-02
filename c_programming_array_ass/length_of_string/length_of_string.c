/*
 * length_of_string.c
 *
 *  Created on: Aug 1, 2023
 *      Author: hp
 */
#include<stdio.h>
int main(){
	int len =0;
	int i;
	char text[100];
	printf("enter string :");
	fflush(stdin);fflush(stdout);
	gets(text);
	for(i=0;i<100;i++){
		if(text[i]!=0){
			len=len+1;
		}
		else{
			break;
		}

	}
	printf("\n length of the string is : %d",len);
}


