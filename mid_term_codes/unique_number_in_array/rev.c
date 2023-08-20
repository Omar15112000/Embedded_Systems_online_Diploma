/*
 * rev.c
 *
 *  Created on: Aug 9, 2023
 *      Author: hp
 */

#include<stdio.h>
int main(){
	int a,i,j,k;
	int ctr=0;

	int b[100];

	printf("enter number of data :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a) ;
	printf("enter the number :");
	for(i=0;i<a;i++){


		fflush(stdin);fflush(stdout);
		scanf("%d",&b[i]);

	}
	for(i=0;i<a;i++){
		ctr=0;
		for(j=0,k=a ;j<k+1;j++){
			if(i!=j){
				if(b[i]==b[j]){
					ctr++;
				}

			}
		}
		if(ctr==0){
				printf("%d",b[i]);
			}

	}

	}

