///WAP to calculate perimeter of rectangle sides, a & b, from the user:
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    //perimeter of rectangle = 2*(a+b)
    printf("Perimeter of rectangle is- %d",2*(a+b));    
    return 0;
}
