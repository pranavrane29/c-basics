#include <stdio.h>
int main(){ 
    float subject_1,subject_2,subject_3,subject_4,subject_5, percentage, total_marks;
    printf("Enter your 1st subjects marks - ");
    scanf("%f",&subject_1);
    printf("Enter your 2nd subjects marks -");
    scanf("%f",&subject_2);
    printf("Enter your 3rd subjects marks -");
    scanf("%f",&subject_3);
    printf("Enter your 4th subjects marks -");
    scanf("%f",&subject_4);
    printf("Enter your 5th subjects marks -");
    scanf("%f",&subject_5);
    total_marks = subject_1+subject_2+subject_3+subject_4+subject_5;
    printf("Your total marks are - %f",total_marks);
    percentage = (total_marks/500)*100;
    printf("The Percentage of the Five Subjects are %f",percentage);
    return 0;
}