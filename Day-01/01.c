//Write a program to Calculate sum of first N natural numbers.

#include<stdio.h>
int main(){
    int i, n, sum=0;
    printf("Enter the number for sum of that range : ");
    scanf("%d",&n);
    for (i=0 ; i<=n ; i++){
       sum += i; 
    }
    printf("Sum of %d natural number is : %d",n,sum);
    return 0;
}
