#include <conio.h>
#include <stdio.h>

void main() 
{
   int a,b,x=0;
   printf("enter two numbers:\n ");
   scanf("%d %d",&a,&b);
   
   if (x == a || x == b)
      x = x+1;
   if (x == a || x == b)
      x = x+1;
   
   printf("Mex of 2=%d \n",x);
   getch();
}