//Write a program to print the smallest number of two
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    //used ternary operator
    a<b ? printf("%d is smallest",a) : printf("%d is smallest",b);
    return 0;
}