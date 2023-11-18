
#ifndef QUEUE_H_
#define QUEUE_H_

#define DEBUG 0

struct Sstudent{

	char fristName[50];
	char lastName[50];
	int ID;
	float GPA;
	int courseID;

};

struct Sstudent queue[50];
int length;

enum menu{
	ZERO,
	ADD_S_MANUALY,
	ADD_S_FROM_TXT,
	FIND_S_FROM_ID,
	FIND_STUDENT_FROM_1stNAME,
	FIND_COURSE_STUDENTS,
	STUDENTS_AMOUNT,
	DELET_BY_ROLE,
	UPDATE_STUDENT,
	SHOW_ALL,
	EXIT
};

void debug(void);

void add_student(void);
void add_student_from_txt(void); //char absPath[]
void find_student_with_id(void); //int id
void find_student_with_1stname(void); //char name[]
void find_course_students(void); //int courseID
void total_num_of_students(void);
void delete_student_with_id(void); //int id
void update_student_with_id(void); //int id
void show_all(void);

#endif /* QUEUE_H_ */
