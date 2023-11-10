#include<stdio.h>

struct student {
	char m_name[50];
	int m_role;
	int m_marks;
};

int main() {
	struct student s;

	printf("\nEnter name: ");
	fflush(stdin);fflush(stdout);

	gets(s.m_name);
	printf("Enter role: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &s.m_role);

	printf("Enter Marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &s.m_marks);
	printf("\nStudent name: %s \nRole: %d \nMarks: %d", s.m_name, s.m_role, s.m_marks);

	return 0;
}
