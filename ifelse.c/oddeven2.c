#include<stdio.h>
int main(){
    int a;
    printf("Enter the number - ");
    scanf("%d",&a);
    if (a%2==0){                
        printf("EVEN NUMBER");}

    else{
        printf("ODD NUMBER");   //we can use else in this way
    }
    return 0;
}