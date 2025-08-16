#include<stdio.h>
void findFactorsRecursive(int num, int i) 
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    findFactorsRecursive(num, 1);
    return 0;
}

void findFactorsRecursive(int num, int i) {
    if (i > num)
        return;
    if (num % i == 0)
        printf("%d ", i);
    findFactorsRecursive(num, i + 1);
}