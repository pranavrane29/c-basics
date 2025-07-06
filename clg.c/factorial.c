
#include<stdio.h>
int main()
{
int i,n,fact;
printf("enter any no.");
scanf("%d",&n);
fact = 1;
i = 1;
   while(i<=n)
   {
     fact=fact*i;
     i = i+1;
   }
  printf("%d\n",fact);
return 0;

}