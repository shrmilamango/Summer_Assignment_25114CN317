// Write a program to Create salary management system. 

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float netSalary;
};

int main() {
    struct Employee emp;
    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    emp.hra = emp.basicSalary * 0.20; // 20% HRA
    emp.da  = emp.basicSalary * 0.10; // 10% DA

    emp.netSalary = emp.basicSalary + emp.hra + emp.da;

    printf("\n===== SALARY DETAILS =====\n");
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basicSalary);
    printf("HRA (20%%)     : %.2f\n", emp.hra);
    printf("DA (10%%)      : %.2f\n", emp.da);
    printf("Net Salary    : %.2f\n", emp.netSalary);

    return 0;
}