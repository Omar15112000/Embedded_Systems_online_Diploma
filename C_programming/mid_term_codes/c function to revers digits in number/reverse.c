#include<stdio.h>

void sum(int y){
	while (y>0){
		int z=y%10;
		printf("%d",z);
		y/=10;
	}

}



int main(){
	int a;
	printf("Enter number :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	sum(a);
}
