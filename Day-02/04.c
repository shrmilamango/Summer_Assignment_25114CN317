// Write a program to Check whether a number is palindrome. 

#include<stdio.h>
int main(){
    int n, r=0, y ;
    printf("Enter the Number to Check It is pelindrome or not :");
    scanf("%d",&n);
    int n1 = n;
    while(n!=0){
        y = n %10;
        r = r * 10 + y;
        n = n / 10;
    
    }
    if (r == n1){
        printf("The Given number is pelindrome");
    }
    else{
        printf("The given number is not pelindrome");
    }
    return 0;
}