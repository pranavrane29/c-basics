#include<stdio.h>
int main(){ 
    int a;
    printf(" ENTER THE FIRST SIDE - ");
    scanf("%d",&a);
    int b;
    printf("ENTER THE SECOND SIDE - ");
    scanf("%d",&b);
    int c;
    printf("ENTER THE THIRD SIDE - ");
    scanf("%d",&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
       printf("YES THE SIDES FORM A TRIANGLE");
    }
    else{
        printf("NO THE SIDES DO NOT FORM A TRIANGLE");
    }
    return 0;
}