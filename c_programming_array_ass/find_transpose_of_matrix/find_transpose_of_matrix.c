/*
 * find_transpose_of_matrix.c
 *
 *  Created on: Jul 31, 2023
 *      Author: hp
 */
#include <stdio.h>


int main(){
	int i,j,r,c;
	int a[10][10];
	printf("enter the raws and columns :");
	fflush(stdin);fflush(stdout);
	scanf("%d" "%d",&r,&c);

	for (i=0;i<r;i++){
		for (j=0;j<c;j++){
			printf("enter element of the matrix a%d%d :",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered matrix:\n" );
	for (i=0;i<r;i++){
			for (j=0;j<c;j++){
				printf("\t %d ",a[i][j]);
			}
			printf("\t\n");
		}
	printf("the transpose of the matrix :\n" );
	for (i=0;i<c;i++){
				for (j=0;j<r;j++){
					printf("\t %d ",a[j][i]);
				}
				printf("\t\n");
			}

}



