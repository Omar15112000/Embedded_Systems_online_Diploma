/*
 * sum_of_two_matrices.c
 *
 *  Created on: Jul 31, 2023
 *      Author: hp
 */
/*
 * sum.c
 *
 *  Created on: Jul 30, 2023
 *      Author: hp
 */
#include<stdio.h>
int main(){
int a[2][2];
int b[2][2];
int d[2][2];
int r,c;
printf("enter elements of matrix a \n");
for (r=0;r<2;r++){
	for (c=0;c<2;c++){
		printf("a[%d][%d] =  ",r,c);
		fflush(stdin);fflush(stdout);
		scanf("%d",&a[r][c]);
	}
}
printf("enter elements of matrix b \n");
for (r=0;r<2;r++){
		for (c=0;c<2;c++){
			printf(" b[%d][%d] =  ",r,c);
			fflush(stdin);fflush(stdout);
			scanf("%d",&b[r][c]);
}
	}
	for (r=0;r<2;r++){
			for (c=0;c<2;c++){
				d[r][c]=a[r][c]+b[r][c];
			}
}
	printf("matrix d is :\n  ");
	for (r=0;r<2;r++){
			for (c=0;c<2;c++){
				printf("%d\t",d[r][c]);
}
		printf("\r\n");
}
}



