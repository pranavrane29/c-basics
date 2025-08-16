#include<stdio.h>

// Function to add a and b, updating a and returning the result
int add(int* x, int* y) {
    *x = *x + *y; // Update the value of a
    return *x;    // Return the updated value of a
}

// Function to subtract b from a, updating b and returning the result
int sub(int* x, int* y) {
    *y = *x - *y; // Update the value of b
    return *y;    // Return the updated value of b
}

int main() {
    int a = 3;
    int b = 2;

    // Perform addition
    int add1 = add(&a, &b);
    printf("The addition of a and b is - %d\n", add1);

    // Perform subtraction
    int sub1 = sub(&a, &b);
    printf("The subtraction of a and b is - %d\n", sub1);

    return 0;
}
