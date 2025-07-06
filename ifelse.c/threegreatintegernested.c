#include<stdio.h>
int main(){
    int a, b, c;
    printf("Take the first number -");
    scanf("%d",&a);
    printf("Take the second number -");
    scanf("%d",&b);
    printf("Take the third number -");
    scanf("%d",&c);
    if (a>b){
        if (a>c)    //a > b and c 
        printf("The first number is greatest among three");
        else{ // c > b and a 
            printf("The third number is greatest among three ");
        }   
    }else{
        if (b>c)
        printf("The second number is the greatest among three");
        else{
            printf("The third number is the greatest among three");
        }
    }
   
    return 0;

}