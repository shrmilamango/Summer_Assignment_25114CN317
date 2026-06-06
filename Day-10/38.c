/* Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    * 
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {

        // Spaces
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        // Stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}