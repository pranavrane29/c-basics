#include<stdio.h>
int LeapYear(int year);

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (LeapYear(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);
    return 0;
}

int LeapYear(int year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;  
    else
        return 0;  
}
