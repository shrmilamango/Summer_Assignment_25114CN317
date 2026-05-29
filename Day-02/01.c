// Write a program to Find sum of digits of a number.

#include<stdio.h>
int main(){
    int n, r, sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("Sum of digit is : %d", sum);
    return 0;
}