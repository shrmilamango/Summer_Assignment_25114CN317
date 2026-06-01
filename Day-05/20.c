// Write a program to Find largest prime factor. 

#include <stdio.h>

int main() {
    int num, i, j, count, largestPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++) {
        if(num % i == 0) {

            count = 0;

            for(j = 1; j <= i; j++) {
                if(i % j == 0) {
                    count++;
                }
            }

            if(count == 2) {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}