#include <stdio.h>
int main(){
    int basic ,dearness,house_rent,gross;
    printf("Enter Ramesh salary -");
    scanf("%d",&basic);
    dearness = 0.40 * basic;
    house_rent = 0.20 * basic;
    gross = basic + dearness + house_rent;
    printf("The Gross salary of ramesh is %d", gross);
    return 0;

}