//Take any three integers and tell which one of them is the greatest


#include<stdio.h>
int main(){ 
    int a;
    printf("FIRST NUMBER - ");
    scanf("%d",&a);
    int b;
    printf("SECOND NUMBER - ");
    scanf("%d",&b);
    int c;
    printf("THIRD NUMBER - ");
    scanf("%d",&c);
    if (a>b && a>c)
    {
       printf("THE FIRST NUMBER IS THE GREATEST AMONG THE THREE ");
    
    }
    if (b>a && b>c)
    {
        printf("THE SECOND NUMBER IS THE GREATEST AMONG THE THREE");
    }
    if (c>a && c>b)
    {
        printf("THE THIRD NUMBER IS THE GREATEST AMONG THE THREE");
    }
    
    return 0;

}