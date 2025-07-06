#include <stdio.h>

int main() {
    int numbers[10];  
    int i;
    float sum = 0;
    float average;    
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i=i+1)
     {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];  
    }
    average = sum / 10;
    printf("The average of the 10 numbers is: %.2f\n", average);

    return 0;
}
