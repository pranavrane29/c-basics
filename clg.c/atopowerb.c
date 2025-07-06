/*Write a program to find value of a to the power b*/
#include<stdio.h>
int main()
{
int i,a,b,power;
printf("enter the number and the power to it.");
scanf("%d%d",&a,&b);
power=1;
i = 1;
   while(i <= b)
   {
     power=power*a;
     i++;
   }
    printf("%d\n",power) ;
return 0;

}