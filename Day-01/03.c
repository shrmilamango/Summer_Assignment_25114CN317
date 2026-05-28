// Write a program to Find factorial of a number. 

#include<stdio.h>
int main(){
    int i, n, fact=1;
    printf("Enter the number for factorial :");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("Factorial is : %d",fact);
    return 0;
}