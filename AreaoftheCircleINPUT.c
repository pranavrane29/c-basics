#include<stdio.h>
#define  PI 3.1415
int main(){

     float radius,circumference;
     printf("Enter Radius - ");    
     scanf(" %f",&radius);
     printf("Enter Circumference - ");
     scanf("%f",&circumference);
     float area = PI * radius *radius;
     circumference = 2 * PI * radius;
     printf("The area and the circumference of the circle is %f and %f respectively",area,circumference);                                                   
     return 0 ;
}