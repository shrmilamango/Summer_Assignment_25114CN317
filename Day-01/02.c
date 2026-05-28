// Write a program to Print multiplication table of a given number.

# include <stdio.h>
int main(){
    int i, n, mul=1;
    printf("Enter the number for table : ");
    scanf("%d",&n);
    printf("Table Is :\n");
    for(i=1; i<=10; i++){
        mul = n * i;
        printf("%d X %d = %d\n",n,i,mul);
    }
    return 0;
}