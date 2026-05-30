// Write a program to Print prime numbers in a range.

#include <stdio.h>

int main() {
    int start, end, i, j, count;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (j = start; j <= end; j++) {
        count = 0;

        for (i = 1; i <= j; i++) {
            if (j % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d\t", j);
        }
    }

    return 0;
}