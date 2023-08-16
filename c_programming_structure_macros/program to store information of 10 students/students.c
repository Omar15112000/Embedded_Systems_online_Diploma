/*
 * students.c
 *
 *  Created on: Aug 16, 2023
 *      Author: hp
 */
#include<stdio.h>
#include<string.h>

struct students{
	char name[50];
	int roll;
	float marks;
};

int main(){
	int i,j;
	int array=0;
	struct students s[10];
	char x;

	for(j=0;j<10;j++){

		static int count = 1;

		printf("Enter student_%d roll: ", count);
		fflush(stdin);fflush(stdout);
		scanf("%d", &s[j].roll);


		printf("Enter student_%d name: ", count);
		fflush(stdin);fflush(stdout);
		scanf("%s", s[j].name);

		printf("Enter student_%d marks: ", count);
		fflush(stdin);fflush(stdout);
		scanf("%f", &s[j].marks);

		count++;
		array++;

		printf("Do you want to continue? (y/n): ");
		fflush(stdin);fflush(stdout);
		scanf("%char",&x);
		if(x!='y')break;
	}

	printf("display of students information : \n");
	for (i = 0; i < array; i++) {
		printf("For roll number %d:\n", s[i].roll);
		printf("Student name: %s\n", s[i].name);
		printf("Marks: %f\n", s[i].marks);
	}

	return 0;
}
