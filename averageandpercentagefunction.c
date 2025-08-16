#include<stdio.h>
void calculateResults(int marks[], float *average, float *percentage);

int main(){
    int marks[3];
    float average, percentage;
    printf("Enter marks of 3 subjects: ");
    for (int i = 0; i < 3; i++)
        scanf("%d", &marks[i]);

    calculateResults(marks, &average, &percentage);

    printf("Average: %f, Percentage: %.2f%%\n", average, percentage);
    return 0;
}

void calculateResults(int marks[], float *average, float *percentage) {
    int total = marks[0] + marks[1] + marks[2];
    *average = total / 3.0;
    *percentage = (total / 300.0) * 100;
}

