//Write a program to print the average of 3 numbers inputed by user.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers(a b c): ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Average of three numbers is- %d", (a+b+c)/3);
    return 0;
}
