#include<stdio.h>
void Factors(int num);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    Factors(num);
    
    return 0;
}
void Factors(int num) {
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}