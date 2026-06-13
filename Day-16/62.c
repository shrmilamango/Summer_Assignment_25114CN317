//Write a program to Find maximum frequency element. 

#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxFreq = 0, maxElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", maxElement);
    printf("Frequency = %d", maxFreq);

    return 0;
}