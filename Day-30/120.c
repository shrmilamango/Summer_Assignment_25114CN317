// Write a program to Develop complete mini project using arrays, strings and functions. 

#include <stdio.h>

int rollNo[100];
char name[100][50];
float marks[100];
int n;

void addStudents();
void displayStudents();
void searchStudent();

int main() {
    int choice;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

void addStudents() {
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &rollNo[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }
}

void displayStudents() {
    int i;

    if(n == 0) {
        printf("No Records Found!\n");
        return;
    }

    printf("\nRoll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", rollNo[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int i, roll;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) {
        if(rollNo[i] == roll) {
            printf("\nStudent Found\n");
            printf("Roll No : %d\n", rollNo[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found!\n");
}