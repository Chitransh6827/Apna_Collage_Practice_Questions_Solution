//Make your own pow function.
#include<stdio.h>
void powr(int x, int y)
{
    int p = x;
    for(int i=1;i<y;i++)
    {
        p=p*x;
    }
    printf("Ans: %d",p);
}

int main()
{
    int x,y;
    printf("Enter the number & its base power(n1 bp): ");
    scanf("%d %d",&x,&y);
    powr(x,y);
    return 0;
}