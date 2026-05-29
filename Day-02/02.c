// Write a program to Reverse a number.

#include<stdio.h>
int main(){
    int n, r, rev;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("The reverse number is :");
    while(n>0){
        rev = n % 10;
        printf("%d",rev);
        n = n/10;
    }
    return 0;
}