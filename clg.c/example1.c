#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X'
    
    int *A = &a;
    float *B = &b;
    char *C = &c;
    printf("Address of a: %p, Value of a: %d\n", A, *A);
    printf("Address of b: %p, Value of b: %f\n", B, *B);
    printf("Address of c: %p, Value of c: %c\n", C, *C);

    return 0;
}
