#include <stdio.h>
int main(){
    int b;
    printf("Enter the Year - ");
    scanf("%d",&b);

    if (b%4==0)
    {
       printf("It is a Leap Year");
    }
    else{
        printf("It is not a Leap Year");
    }
    
    return 0;
}