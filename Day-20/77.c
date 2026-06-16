// Write a program to Multiply matrices. 

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int n, i, j, k;

    printf("Enter order of square matrices: ");
    scanf("%d", &n);

    printf("Enter elements of First Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Second Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {

            result[i][j] = 0;

            for(k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product Matrix:\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}