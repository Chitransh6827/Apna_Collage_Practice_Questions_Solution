//Write a program to check if the given number is a natural number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    n>=1 ? printf("Number Entered is a NATURAL NUMBER '%d' ",n) : printf("Enterd Number is NOT A NATURAL NUMBER '%d' ",n);
    return 0;
}