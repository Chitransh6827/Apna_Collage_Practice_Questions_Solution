//Write a program to check if given character is digit or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
//ternary operator is to run one code when the condition is true and another code when the condition is false (one line code for checking true or false condition)
    ch>='0' && ch <='9' ? printf("Its is a digit") : printf("Its is not a digit");
    return 0;
}
