//Make your own pow function.
#include<stdio.h>
#include<math.h>
int powe()
{
    int x,y,power,z;
    printf("Enter the number & its base power(n1 bp): ");
    scanf("%d %d",&x,&y);
    while(z)
    {
        power = x*z;
        z++;
    }
    printf("Ans: %d",power);

}

int main()
{
    powe();
    return 0;
}