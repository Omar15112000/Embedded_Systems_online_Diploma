#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "fifo.h"

void debug(void){

	if (length == 0) return;

	printf("queue base address %p \n", queue);
	printf("queue last indexed address       %p \n"     ,  (queue + length-1));
	printf("last inserted student First name %p \t %s\n", &(queue + length-1)->fristName, (queue + length-1)->fristName );
	printf("last inserted student last name  %p \t %s\n", &(queue + length-1)->lastName , (queue + length-1)->lastName ) ;
	printf("last inserted student ID (roll)  %p \t %d\n", &(queue + length-1)->ID       , (queue + length-1)->ID )       ;
	printf("last inserted student GPA        %p \t %f\n", &(queue + length-1)->GPA      , (queue + length-1)->GPA )      ;
	printf("last inserted student ID         %p \t %d\n", &(queue + length-1)->courseID , (queue + length-1)->courseID ) ;

}

void add_student(void){

	if(DEBUG) debug();

	printf("Enter Student First name\n");
	fflush(stdout); fflush(stdin);
	scanf("%s", ((queue + length)->fristName ) );

	printf("Enter Student second name\n");
	fflush(stdout); fflush(stdin);
	scanf("%s", ((queue + length)->lastName) );

	printf("Enter Student ID\n");
	fflush(stdout); fflush(stdin);
	scanf("%d", &((queue + length)->ID) );

	printf("Enter Student GPA\n");
	fflush(stdout); fflush(stdin);
	scanf("%f", &((queue + length)->GPA));

	printf("Enter Course ID\n");
	fflush(stdout); fflush(stdin);
	scanf("%d", &((queue + length)->courseID));

	length++;

	if(DEBUG) debug();
}

void add_student_from_txt(void){

	FILE *file;
	char path[] = "C:\\Users\\hp\\OneDrive\\Desktop\\database\\main.c\\student.txt";
	char studentsFile[150];

	file = fopen(path, "r");

	if (file == NULL){
		printf("Can not open this file\n");
		return;
	}

	while(fgets(studentsFile, 150, file ) != NULL){
		printf("Students from the file: %s\n", studentsFile);


		if ( sscanf(studentsFile, "%[^,],%[^,],%d,%f,%d",
				(queue + length)->fristName ,
				(queue + length)->lastName,
				&(queue + length)->ID,
				&(queue + length)->GPA,
				&(queue + length)->courseID) == 5){

			length++;
			if(DEBUG) debug();
		}
		else{
			printf("The Student is missing some fields\n");
		}
	}

	fclose(file);


}

void find_student_with_id(void){

	int id;

	printf("Enter the ID\n");
	fflush(stdout); fflush(stdin);
	scanf("%d", &id);

	for (int i = 0; i < length; i++){
		if (id == (queue + i)->ID ){
			printf("Name: %s %s \n", (queue + i)->fristName, (queue + i)->lastName);
			printf("ID: %d \n", (queue + i)->ID);
			printf("GPA: %f \n", (queue + i)->GPA);
			printf("Course ID: %d \n", (queue + i)->courseID);

			return;
		}
	}

	printf("Student not found!\n");

}

void find_student_with_1stname(void){

	char name[50];

	printf("Enter the first name (case sensitive):\n");
	fflush(stdout); fflush(stdin);
	scanf("%s", name);

	for (int i = 0; i < length; i++){
		if (strcmp( name, (queue + i)->fristName) == 0){
			printf("Name: %s %s \n", (queue + i)->fristName, (queue + i)->lastName);
			printf("ID: %d \n", (queue + i)->ID);
			printf("GPA: %f \n", (queue + i)->GPA);
			printf("Course ID: %d \n", (queue + i)->courseID);
			return;
		}
	}

	printf("Student not found!\n");
}

void find_course_students(void){

	int courseId, courses = 0;

	printf("Enter the course ID:\n");
	fflush(stdout); fflush(stdin);
	scanf("%d", &courseId);

	for (int i = 0; i < length; i++){
		if (courseId == (queue + i)->courseID ){
			courses++;
		}
	}

	if (courses == 0){
		printf("No one has registered for this Course\n");
	}
	else{
		printf("Course %d has %d students\n",courseId, courses);
	}

}

void total_num_of_students(void){
	printf("Total number of students: %d\n",length);
}

void delete_student_with_id(void){

	int id;

	printf("Enter the ID\n");
	fflush(stdout); fflush(stdin);
	scanf("%d", &id);

	for (int i = 0; i < length; i++){
		if (id == (queue + i)->ID ){
			for (; i < length; i++){

				//Shift back the data of the queue
				strcpy( (queue + i)->fristName, (queue + i + 1)->fristName);
				strcpy( (queue + i)->lastName , (queue + i + 1)->lastName);
				(queue + i)->ID       = (queue + i + 1)->ID;
				(queue + i)->GPA      = (queue + i + 1)->GPA;
				(queue + i)->courseID = (queue + i + 1)->courseID;

			}
			length--;
			printf("The student of id %d was removed, the current number of students: %d\n", id, length);
			return;
		}
	}

	printf("Student not found!\n");

}

void update_student_with_id(void){

	int id;

	printf("Enter the ID\n");
	fflush(stdout); fflush(stdin);
	scanf("%d", &id);

	for (int i = 0; i < length; i++){
		if (id == (queue + i)->ID ){

			printf("Enter Student First name\n");
			fflush(stdout); fflush(stdin);
			scanf("%s", ((queue + i)->fristName));

			printf("Enter Student second name\n");
			fflush(stdout); fflush(stdin);
			scanf("%s", ((queue + i)->lastName));

			printf("Enter Student ID\n");
			fflush(stdout); fflush(stdin);
			scanf("%d", &((queue + i)->ID));

			printf("Enter GPA\n");
			fflush(stdout); fflush(stdin);
			scanf("%f", &((queue + i)->GPA));

			printf("Enter Course ID\n");
			fflush(stdout); fflush(stdin);
			scanf("%d", &((queue + i)->courseID));

			return;
		}
	}

	printf("Student not found!\n");

} //int id

void show_all(void){

	if (length == 0 ){
		printf(" List is empty\n");
		return;
	}
	for (int i = 0; i < length; i++){
		printf("\nFirst Name: %s \n", (queue + i)->fristName);
		printf("Last Name: %s \n", (queue + i)->lastName);
		printf("ID: %d \n", (queue + i)->ID);
		printf("GPA: %f \n", (queue + i)->GPA);
		printf("Course ID: %d \n", (queue + i)->courseID);
	}


}
