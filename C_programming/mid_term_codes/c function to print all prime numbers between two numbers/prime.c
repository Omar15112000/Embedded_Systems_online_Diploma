/*
 * prime.c
 *
 *  Created on: Aug 8, 2023
 *      Author: hp
 */
#include<stdio.h>

void prime(int x,int y){
	int i,j;
	for (j=x;j<=y;j++){
		int z=1;
		for (i=1;i<=y;i++){
			if(j%i==0&&i!=1&&i!=j){
				z=0;
				break;
			}
		}
		if(z==1){
			printf("%d ",j);
		}
	}
}

int main(){
	int a,b;
	printf("Enter intervals :");
	fflush(stdout);fflush(stdin);
	scanf("%d""%d",&a,&b);
	prime(a,b);

}


