#include<stdio.h>

 int main(){
 int length, breadth , area ,perimeter;
    printf("Enter the length -");
    scanf("%d",&length);
    printf("Enter the breadth - ");
    scanf("%d",&breadth);
    area = length*breadth;
    perimeter = 2*(length+breadth);
    printf("The area of the rectangle is - %d",area);
    printf("The perimeter of the rectangle is - %d",perimeter);

   return 0;
 }
 