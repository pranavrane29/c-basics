#include<stdio.h>
int main(){
    int b;
    printf("ENTER THE NUMBER - ");
    scanf("%d",b);
    if (5%b==3 || 3%b==0) //15%b==0 
    {
        printf("IT IS DIVISIBLE BY 5 or 3");
    }
    else{
        printf("IT IS NOT DIVISIBLE BY 5 or 3");
    }
    
    return 0;

}