#include<stdio.h>
int main(){
    int i,n,fact;
    printf("Enter any no -");
    scanf("%d",&n);
    fact = 1;
    for ( i = 1; i < n; i++)
    {
       fact=fact*i;
    }
     printf("%d\n",fact);
    return 0;
}