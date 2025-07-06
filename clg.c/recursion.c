#include <stdio.h>
int divide(int,int);
int main()
{
   int m,n;
   printf("Enter the value of Dividend -");
   scanf("%d",&m);
   printf("Enter the value of Divisor -");
   scanf("%d",&n);
   int d = divide(m, n);
   printf("Result of %d / %d = %d\n", m, n, d);
   return 0;
}
int divide(int a,int b)
{
   if (a<b)
   {
      return 0;
   }
   else
   {
      return 1 + divide(a-b, b);
   }
}