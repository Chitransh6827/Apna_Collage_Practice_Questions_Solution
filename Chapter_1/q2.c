//Take a number(n) from user & output its cube(n*n*n).
#include <stdio.h>
int main()
{
    int n,cube;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    cube = n*n*n;
    printf("Cube of n is: %d",cube);
}