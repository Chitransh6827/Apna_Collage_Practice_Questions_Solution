//Write a function to print "Hot" or "Cold" depending on the temperature user enters.
#include<stdio.h>
int h_or_c()
{
    int temp;
    printf("Enter the temprature: ");
    scanf("%d",&temp);
    if(temp <= 15)
    {
        printf("Cold");
    }
    else if(temp >= 25)
    {
        printf("Hot");
    }
    else{}
}
int main()
{
    h_or_c();
    return 0;
}
    