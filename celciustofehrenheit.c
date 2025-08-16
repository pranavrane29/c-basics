#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius - ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%f Celsius is equal to %f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
