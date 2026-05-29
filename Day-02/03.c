// Write a program to Find product of digits.

#include<stdio.h>
int main(){
    int n, r, prod = 1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        r = n%10;
        prod = prod * r;
        n = n/10;
    }
    printf("Product Is :%d",prod);
    return 0;
}