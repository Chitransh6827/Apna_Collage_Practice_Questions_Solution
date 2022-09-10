// Search on what a "nested loop" is & print this pattern using it.
/* *****
   *****
   *****
   *****   */

#include<stdio.h>
int main()
{
   for(int n=1;n<=4;n++)
   {
      for(int i=1;i<=5;i++)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}