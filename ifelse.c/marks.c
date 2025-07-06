#include<stdio.h>
int main(){
  float b;
    printf("Enter the Percentage - ");
    scanf("%f",&b);
    /*b>80 --= A grade
    b>60 --= B grade
    b>40 --= C grade
    b=<39 --= D grade*/
    if (b>80)
    {
      printf("A Grade");
    }
    else if (b>60)      //else if is used to avoid the double printing of the things 
    {                   //if we use only [if]in every sentence than it will read every sentence and print according the condition
       printf("B Grade");
    }
    else if (b>40)
    {
        printf("C Grade");
    }
    else{
        printf("D Grade");
    }
    return 0;


}