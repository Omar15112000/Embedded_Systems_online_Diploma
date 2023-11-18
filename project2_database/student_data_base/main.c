/*
 =======================================
 Name        : main.c
 Author      : hp
 Copyright   : Your copyright notice
 ===================================================
 */

#include "stdio.h"
#include "fifo.h"


int main(void) {

    int choice;

    while(1){
		printf("\n\t\t\tMenu\n");
		printf("1- Add student details manually.\n");
		printf("2- Add students details from text file.\n");
		printf("3- Find student by a given roll number.\n");
		printf("4- Find students by a given first name.\n");
		printf("5- Find students registered in specific course.\n");
	    printf("6- Number of students registered.\n");
	    printf("7- Delete student by Roll number.\n");
	    printf("8- Update student information.\n");
	    printf("9- Show all\n");
	    printf("10- Exit\n");
		printf("\n");

		printf("Enter your choice: ");
		fflush(stdout); fflush(stdin);
		scanf("%d", &choice);

		switch (choice) {
			case ADD_S_MANUALY:
				printf("You chose to add a student manually.\n");
				add_student();
				break;
			case ADD_S_FROM_TXT:
				printf("You chose to add a student from a text file.\n");
				add_student_from_txt();
				break;
			case FIND_S_FROM_ID:
				printf("You chose to Find student by a given roll number.\n");
				find_student_with_id();
				break;
			case FIND_STUDENT_FROM_1stNAME:
				printf("You chose to Find students by a given first name.\n");
				find_student_with_1stname();
				break;
			case FIND_COURSE_STUDENTS:
				printf("You chose to Find the number of students registered in specific course.\n");
				find_course_students();
				break;
			case STUDENTS_AMOUNT:
				printf("You chose to Find the total number of students registered.\n");
				total_num_of_students();
				break;
			case DELET_BY_ROLE:
				printf("You chose to Delete student by Roll number.\n");
				delete_student_with_id();
				break;
			case UPDATE_STUDENT:
				printf("You chose to Update student information.\n");
				update_student_with_id();
				break;
			case SHOW_ALL:
				printf("You chose to show all students.\n");
				show_all();
				break;
			case EXIT:
				printf("You chose to exit.\n");
				return 0;
			default:
				printf("Invalid choice.\n");
				break;
		}
    }
	return 0;
}
