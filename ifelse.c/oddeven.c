#include<stdio.h>
int main(){
    int a;
    printf("Enter the number - ");
    scanf("%d",&a);
    if (a%2==0){                //THE STATMENT WRITTEN IN ()AFTER IF IS A CONDITION , IF THE CONDITION IS SATISFIED ,
        printf("EVEN NUMBER");  //THEN ONLY THE CODE WILL RUN OR IT WILL TERMINATE THERE ONLY. AND == MEANS TO COMPARE
    }
    if (a%2!=0){                //THE != MEANS NOT EQUAL TO
       printf("ODD NUMBER");
    }
    
    return 0;

}