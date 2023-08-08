#include<stdio.h>
#include<string.h>

void reverse(char rev[],int x){

	printf("%c",rev[x]);
	x--;
	if (x>=0){
	reverse(rev,x);
	}
}




int main(){
	char text[100];
	printf("enter a sentence : ");
	fflush(stdin);fflush(stdout);
	gets(text);
	int i=strlen(text)-1;
	reverse(text,i);
}



