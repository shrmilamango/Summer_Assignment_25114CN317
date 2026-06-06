/* Write a program to Print character pyramid. 
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA 
*/

#include <stdio.h>

int main() {
    int i, j;


    for(i = 1; i <= 5; i++) {

        // Spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Increasing characters
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Decreasing characters
        for(j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}