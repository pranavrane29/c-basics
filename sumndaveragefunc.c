#include<stdio.h>
void SumAndAverage(int arr[], int *sum, float *average); //Declared the prototype 
int main() {
    int numbers[5], sum;
    float average;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &numbers[i]);
    SumAndAverage(numbers, &sum, &average);
    printf("Sum: %d, Average: %.f\n", sum, average);
    return 0;
}
void SumAndAverage(int arr[], int *sum, float *average) 
{
    *sum = 0;
    for (int i = 0; i < 5; i++)
        *sum = *sum + arr[i];
    *average = *sum / 5.0;
}
