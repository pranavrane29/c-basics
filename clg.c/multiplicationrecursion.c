#include <stdio.h>
#include <math.h>

int multi(int,int);

int main()
{
    int m,n;
    printf("Enter the value of first number -");
    scanf("%d",&m);
    printf("Enter the value of second number  -");
    scanf("%d",&n);
   int d = multi(m,n);
   printf("m: %d \n", m);
   printf("multiplication of the given numbers is : %d", d);
   return 0;
}
int multi(int a,int b)
{
int p;
   if(b==1)
   {
   	return a;
    }
   else
   {
   p=a+multi(a,b-1);
   return p;
   }
}