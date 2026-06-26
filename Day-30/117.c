// Write a program to Create student record system using arrays and strings. 

#include <stdio.h>

int main() {
    int rollNo[100];
    float marks[100];
    char name[100][50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &rollNo[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n===== STUDENT RECORDS =====\n");

    printf("\nRoll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", rollNo[i], name[i], marks[i]);
    }

    return 0;
}