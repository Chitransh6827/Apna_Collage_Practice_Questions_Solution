//Write a program to check if a number is prime or not
#include<stdio.h>
int main()
{
    int entrd_no,quotient,check=0;
    printf("Enter the number: ");
    scanf("%d",&entrd_no);
    quotient=entrd_no/2;
    for(int i=2;i<=quotient;i++)
    {
        if(entrd_no%i==0)
        {
            check=1;
        }
    }
    if(check==0)
    {
        printf("Entered no is Prime");
    }
    else if(check==1)
    {
        printf("Entered no is NOT prime");
    }

    return 0;
}
