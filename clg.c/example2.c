#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    int *X = &x;
    int *Y = &y;
    int sum = *X + *Y;
    int diff = *X - *Y;
    int div = *X / *Y;
    int multi = (*X) * (*Y);
    printf("The sum of %d and %d is: %d\n", *X, *Y, sum);
    printf("The difference of %d and %d is: %d\n", *X, *Y, diff);   
    printf("The division of %d and %d is: %d\n", *X, *Y, div);
    printf("The multiplication of %d and %d is: %d\n", *X, *Y, multi);
    return 0;
}