#include <stdio.h>
int main(){
    int a,b;    // a > b
    printf("ENTER DIVIDEND - ");
    scanf("%d",&a);
    printf("ENTER DIVISOR - ");
    scanf("%d",&b);
    int q = a/b;
    int r =  a % b ; // REMAINDER = DIVIDEND - DIVISOR * QUOITENT so int r = a - b * q is the command 
    printf("THE REMAINDER WHEN %d IS DIVIDED BY %d IS - %d",a,b,r);
    
    return 0;
}

// % is KNOWN AS MODULO  used to find the remainder when one integer is divided by another.
 