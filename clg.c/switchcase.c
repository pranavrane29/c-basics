#include<stdio.h>
int main(){
    int num;
    printf("Enter any number from 1 to 7\n");
    scanf("%d",&num);
    switch (num){
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thresday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Please Enter Valid Number");
    }
    
    
    return 0;
}