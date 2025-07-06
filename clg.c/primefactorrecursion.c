#include <stdio.h>

int primeFactors(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}
int main() {
    int num;
    printf("Enter a number - ");
    scanf("%d", &num);
    printf("Prime factors - ");
    primeFactors(num);
    return 0;
}
