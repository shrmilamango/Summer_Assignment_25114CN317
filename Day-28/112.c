// Write a program to Create contact management system.

#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", contacts[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", contacts[i].phone);
    }

    printf("\n===== CONTACT LIST =====\n");

    for(i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contacts[i].name);
        printf("Phone : %s\n", contacts[i].phone);
    }

    return 0;
}