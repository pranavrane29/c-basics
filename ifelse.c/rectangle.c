#include<stdio.h>
int main(){
    int l; //LENGTH
    printf("Enter the Length of the Rectangle - ");
    scanf("%d",&l);
    int b;  //BREADTH
    printf("Enter the Breadth of the Rectangle - ");
    scanf("%d",&b);
    int a = l * b; //AREA 
    int p = 2 * (l + b); //PERIMETER
    if (a>p)
    {
       printf("THE AREA OF THE RECTANGLE IS GREATER THAN ITS PERIMETER");
    }
    if (a<p)
    {
      printf("THE AREA OF THE RECTANGLE IS LESSER THAN ITS PERIMETER");
    }
    //WE CAN ALSO WRITE -
    //else {
    // printf("The are is not greater then its perimeter");
    //}
    if (a==p)
    {
       printf("THE AREA OF THE RECTANGLE IS SAME AS ITS PERIMETER");
    }
    
    return 0;

}