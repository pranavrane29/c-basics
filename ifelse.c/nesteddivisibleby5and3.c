#include<stdio.h>

int main(){
    int b;
    printf("Enter the number - ");
    scanf("%d", &b);

    if (b % 5 == 0) {                                       //this is called as nested if else ,like adding the condition without then && thing
        if (b % 3 == 0) {
            printf("The number is divisible by 5 and 3");
        } else {
            printf("The number is not divisible by 5 and 3");
        }
    } else {
        printf("The number is not divisible by 5 and 3");
    }
    
    return 0;
}
