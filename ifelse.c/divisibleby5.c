#include<stdio.h>
int main(){
    int a;
    printf("ENTER THE NUMBER - ");
    scanf("%d",&a);

    if (a%5==0){
    printf("YES , IT IS DIVISIBLE BY 5");
    }
    else{
        printf("NO , IT IS NOT DIVISIBLE BY 5");}
    return 0;

}