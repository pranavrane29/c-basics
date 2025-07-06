#include<stdio.h>
int main(){
    int  x, y;
    printf("Enter the Coordinates - ");
    scanf("%d %d", &x, &y);
    if (x==0 && y==0)
    {
        printf("The point is origin");
    
    }
    else if (x==0)
    {
       printf("The point lies on the y axis");
    }
    else if (y==0)
    {
       printf("The point lies on the x axis");
    }
    else{
        printf("The point does not lie on the x and y axis");
    }
    
    return 0;
}