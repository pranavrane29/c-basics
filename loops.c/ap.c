#include<stdio.h>

int main() {
    int n;
    printf("Enter the number you want the AP of: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d\t", 3 * i + 1); // AP formula: 3i + 1
    }

    return 0;
}
