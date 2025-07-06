/*Write a program to print table of any no. entered through user*/
#include<stdio.h>

 int main( )
{
int i,n ;
printf("Enter any number -");
scanf("%d",&n);
 i = 1;
 while(i<=10)
{printf("%d\n",n*i);
    i = i + 1;
}
}