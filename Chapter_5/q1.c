//Write a function to find sum of digits of a number.

#include<stdio.h>
int main()
{
    int entrd_digits,remainder,sum=0;
    printf("Enter the digit: ");
    scanf("%d",&entrd_digits);
    while(entrd_digits>0)
    {
        remainder=entrd_digits%10;
        sum=sum+remainder;
        entrd_digits=entrd_digits/10;
        
    }
    printf("Sum of digits is: %d",sum);
}
