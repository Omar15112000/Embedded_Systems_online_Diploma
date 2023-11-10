#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct sdata{
    int studentID;
    char NAME[50];
    float height;
};

struct sstudent{
    struct sdata student;
    struct sstudent* pnext;
};

struct sstudent* global_first_student = NULL;

void add_student(){
    char temp_text[50];
    struct sstudent* new_student;
    struct sstudent* last_student;

    //if structure is empty
    if(global_first_student == NULL){
        new_student = (struct sstudent*) malloc(sizeof(struct sstudent));
        global_first_student = new_student;
    }
    //if there are students in the structure
    else{
        // navigate till the last record
        last_student = global_first_student;
        while(last_student->pnext)
            last_student = last_student->pnext;
        new_student = (struct sstudent*) malloc(sizeof(struct sstudent));
        last_student->pnext = new_student;
    }
    // fill the new data
    printf("\nEnter the ID: ");
    fflush(stdout);
    gets(temp_text);
    new_student->student.studentID = atoi(temp_text);

    printf("\nEnter the name: ");
    fflush(stdout);
    gets(temp_text);
    strcpy(new_student->student.NAME, temp_text);

    printf("\nEnter the height: ");
    fflush(stdout);
    gets(temp_text);
    new_student->student.height = atof(temp_text);

    // set next pointer to null
    new_student->pnext = NULL;
}

void delete_student(){
    char temp_text[40];
    int selected_id;

    printf("Enter the student ID to be deleted: ");
    fflush(stdout);
    gets(temp_text);
    selected_id = atoi(temp_text);

    if(global_first_student){
        struct sstudent* pselected_student = global_first_student;
        struct sstudent* p_previous_student = NULL;

        while(pselected_student){
            if(pselected_student->student.studentID == selected_id){
                if(p_previous_student){
                    // check if the selected student is not the first one
                    p_previous_student->pnext = pselected_student->pnext;
                }
                else{
                    // the selected student is the first one
                    global_first_student = pselected_student->pnext;
                }
                free(pselected_student);
            }
            p_previous_student = pselected_student;
            pselected_student = pselected_student->pnext;
        }
    }
}

void view_student(){
    char temp_text[40];
    int selected_id;

    printf("Enter the student ID to view: ");
    fflush(stdout);
    gets(temp_text);
    selected_id = atoi(temp_text);

    struct sstudent* pselected_student = global_first_student;
    while(pselected_student){
        if(pselected_student->student.studentID == selected_id){
            printf("\nStudent ID: %d", pselected_student->student.studentID);
            printf("\nName: %s", pselected_student->student.NAME);
            printf("\nHeight: %.2f", pselected_student->student.height);
            return;
        }
        pselected_student = pselected_student->pnext;
    }

    printf("\nStudent not found with ID: %d", selected_id);
}

int main(){
    int choice;

    do{
        printf("\n1. Add Student");
        printf("\n2. Delete Student");
        printf("\n3. View Student");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        fflush(stdout);
        scanf("%d", &choice);
        fflush(stdin); // to flush the input buffer

        switch(choice){
            case 1:
                add_student();
                break;
            case 2:
                delete_student();
                break;
            case 3:
                view_student();
                break;
            case 4:
                printf("\nExiting program...");
                break;
            default:
                printf("\nInvalid choice! Please try again.");
        }
    } while(choice != 4);

    return 0;
}
