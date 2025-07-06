#include <stdio.h>
int square(float *x, float *y);
int main()
{
    float a, b;
    printf("Enter any number - ");
    scanf("%f", &a);

    square(&a, &b); //recalling a function 
    printf("Square of %f is %f", a, b);
    return 0;
}
int square(float *x, float *y) //initialized the function
{
    *y = (*x) * (*x);
}
