// Write a program to Check whether a number is prime. 

# include <stdio.h>
int main(){
    int n, i=1, count=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    while(i<=n){
        if(n % i == 0){
            count += 1;
        }
        i++;
    }
    if(count == 2){
        printf("Number is Prime");
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}