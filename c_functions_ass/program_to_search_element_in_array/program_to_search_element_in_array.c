/*
 * program_to_search_element_in_array.c
 *
 *  Created on: Aug 1, 2023
 *      Author: hp
 */
#include<stdio.h>
int main (){
	int a,i,x;
	int b[10];
	printf("enter number of elements :");
	fflush(stdin);fflush(stdout);
    scanf("%d",&a);
    for(i=0;i<a;i++){
    	b[i]=(i+1)*11;
    }
    for(i=0;i<a;i++){
        	printf("%d\t",b[i]);
    }
    printf("\n enter element to be searched  :");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    for(i=0;i<a;i++){
    	if(b[i]==x){
    		printf("\n number found at location: %d",i);
    	}

    }

}

