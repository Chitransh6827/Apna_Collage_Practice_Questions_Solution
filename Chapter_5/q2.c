// Write a function to find square root of a number.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void sqt(int n, int s)
{

    s=sqrt(n);
    printf("Square root of no '%d' is: %d",n,s);
}

int main()
{
    int n,s;
    printf("Enter the number: ");
    scanf("%d",&n);
    sqt(n,s);
}