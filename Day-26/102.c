// Write a program to Create voting eligibility system. 

#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("\nName: %s\n", name);

    if(age >= 18)
        printf("Status: Eligible to Vote");
    else
        printf("Status: Not Eligible to Vote");

    return 0;
}