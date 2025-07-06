#include <stdio.h>
int power(int a, int b){   // recursive case 
    if (b==0) {
        return 1;
    } else {
        return a * power(a, b - 1);
    }
}
int main() {
    int a,b;
    printf("Enter the value of base -");
    scanf("%d",&a);
    printf("Enter the value of power-");
    scanf("%d",&b);
    int result = power(a, b);
    printf("%d to the power of %d is %d\n", a, b, result);
    return 0;
}