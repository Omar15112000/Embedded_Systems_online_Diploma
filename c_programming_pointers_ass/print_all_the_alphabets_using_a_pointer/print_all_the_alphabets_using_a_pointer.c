/*
 * print_all_the_alphabets_using_a_pointer.c
 *
 *  Created on: Aug 20, 2023
 *      Author: hp
 */
#include<stdio.h>
int main(){
	char alph[26];
	int i;
	char* ptr = alph ;

	for(i=0;i<26;i++){
		alph[i]=i+'A';
	}
	printf("alphabets:");
	for(i=0;i<26;i++){
			printf(" %c",*ptr);
			ptr++;
		}

}

