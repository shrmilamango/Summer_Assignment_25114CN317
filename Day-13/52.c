// Write a program to Count even and odd elements. 

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of Even Elements = %d\n", even);
    printf("Number of Odd Elements = %d", odd);

    return 0;
}