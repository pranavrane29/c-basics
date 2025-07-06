#include<stdio.h>
int main (){
    int b;
    printf("ENTER THE NUMBER - ");
    scanf("%d",&b);

    if (b<0) //if n is negative
    {
        b = b * (-1);
    }
    printf("YOUR ABSOLUTE VALUE IS - %d",b);
    
    return 0;
}
