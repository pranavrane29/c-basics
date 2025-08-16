#include <stdio.h>
int main(){
    int i, n,d;
    printf("Enter any no - ");
    scanf("%d",&n);

    for ( i = 1; i <=10; i++)
    {
       d = n * i;
       printf("%d * %d = %d\n",n , i , d);
    }
    
    return 0;
}