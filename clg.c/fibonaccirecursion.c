#include <stdio.h>
int fibonacci(int n) {
    if (n<=1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n;
    printf("Enter the value of number you want the fibonacci series of - ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("%d\t\n", fibonacci(i));
}
    return 0;
}
