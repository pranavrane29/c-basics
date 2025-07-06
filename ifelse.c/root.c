#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

       
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else {
        
        printf("The roots are complex and cannot be calculated using real numbers.\n");
    }

    return 0;
}
