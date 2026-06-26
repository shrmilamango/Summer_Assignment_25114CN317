// Write a program to Create mini library system. 

#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int n = 0, choice, i;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &books[n].id);

                printf("Enter Book Title: ");
                scanf("%s", books[n].title);

                printf("Enter Author Name: ");
                scanf("%s", books[n].author);

                n++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No books available.\n");
                }
                else {
                    printf("\n===== BOOK LIST =====\n");

                    for(i = 0; i < n; i++) {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID : %d\n", books[i].id);
                        printf("Title   : %s\n", books[i].title);
                        printf("Author  : %s\n", books[i].author);
                    }
                }
                break;

            case 3:
                printf("Exiting Library System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}