#include<stdio.h>

int swap(int *x, int *y);

int main(){
    int a , b;
    printf("enter the value of a - ");
    scanf("%d",&a);
    printf("enter the value of b - ");
    scanf("%d",&b);

    swap(&a,&b);
    printf("\nAfter swapping the value of a is %d and b is %d",a,b);

    return 0;
}
    int swap(int *x , int *y)
{
   int t ;

   t = *x;
   *x = *y;
   *y = t;
}