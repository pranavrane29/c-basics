#include<stdio.h>
int main(){
    float b;
    printf("Enter the Cost Price of the Product - ");
    scanf("%f",&b); 
    float a;
    printf("Enter the Selling Price of the Product - ");
    scanf("%f",&a); 
    if (a>b)
    {
       printf("Profit");
    }
    if (a<b){
        printf("Loss");
    }
    if (a==b)
    {
        printf("No Profit or Loss");
    }
    

    return 0;
}