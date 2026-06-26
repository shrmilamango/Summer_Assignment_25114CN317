// Write a program to Create mini employee management system.

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;

                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No employee records found.\n");
                }
                else {
                    printf("\n===== EMPLOYEE RECORDS =====\n");

                    for(i = 0; i < n; i++) {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID     : %d\n", emp[i].id);
                        printf("Name   : %s\n", emp[i].name);
                        printf("Salary : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Exiting Employee Management System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}