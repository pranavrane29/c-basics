// take float input and print the fractional part of it as a output

#include<stdio.h>
int main(){
    float x ;
    printf("ENTER THE DECIMAL NUMBER - ");
    scanf("%f",&x);

    int y = x;
    float z = x - y ;
    printf("YOUR FRACTIONAL PART IS - %f ",z);
    return 0;
}