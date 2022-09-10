//Write a program to print prime numbers in a range!

#include<stdio.h>
int main()
{
    int range,i,j;
    printf("Enter the range: ");
    scanf("%d",&range);
    for(i=2;i<=range;i++)
    {
        int factor=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                factor++;
            }
        }
        if(factor==2){
            printf("%d ",i);
        }
    }
    return 0;
}