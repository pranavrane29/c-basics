#include<stdio.h>
int main(){
    int b;
    printf("Enter the number - ");
    scanf("%d",&b);
//Expression 1 ? Expression 2 : Expression 3
b>99 && b<1000 ? printf("The number is a three digit number") : printf("The number is not a three digit number");
return 0;
}