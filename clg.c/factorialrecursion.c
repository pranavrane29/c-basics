#include <stdio.h>
#include <math.h>

int factorial(int);
int main()
{
   int m = 5;
   int d = factorial(m);
   printf("m: %d \n", m);
   printf("Factorial of a: %d", d);
   return 0;
}
int factorial(int n){
int p;
   if(n <= 1){
      return 1;
   }
   else{
   p= n*factorial(n - 1);
   return p;
   }
}