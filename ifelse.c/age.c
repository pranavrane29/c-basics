//if the ages of ram ,shyam and ajay are input through the keyboard , write a program to determine the youngest of three
#include<stdio.h>
int main(){
    
    int ram;
    printf("ENTER THE AGE OF RAM- ");
    scanf("%d",&ram);

     int shyam;
    printf("ENTER THE AGE OF SHYAM- ");
    scanf("%d",&shyam);

     int ajay;
    printf("ENTER THE AGE OF AJAY - ");
    scanf("%d",&ajay);

    if (ram<shyam && ram<ajay)
    {
        printf("AMONG THREE, RAM IS THE YOUNGEST ONE ");
    }
    else if (shyam<ram && shyam<ajay)
    {
       printf("AMONG THREE, SHYAM IS THE YOUNGEST ONE");
    }
    else
    {
        printf("AMONG THREE, AJAY IS THE YOUNGEST ONE");
    }
    
    return 0;

}