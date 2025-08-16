#include<stdio.h>
int gcd(int x, int y);

int main() {
    int num1, num2;
    printf("Enter the num 1 - ");
    scanf("%d", &num1);
    printf("Enter the num 2 - ");
    scanf("%d", &num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
int gcd(int x, int y) {
    if (y == 0) 
        return x;
    else 
        return gcd(y, x % y);  
}
