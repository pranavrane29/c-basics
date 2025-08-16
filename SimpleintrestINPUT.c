#include <stdio.h>
int main(){
    float principal , rate , time , si ;
    printf("ENTER PRINCIPAL -");
    scanf ("%f",&principal);
    printf("ENTER RATE -");
    scanf ("%f",&rate);
    printf("ENTER TIME -");
    scanf ("%f",&time);
    si = (principal*rate*time)/100;
    printf("Your Simple Intrest is - %f",si);



    return 0;
}