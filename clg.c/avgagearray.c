#include<stdio.h>

int main(){
float age[]= {20,34,50,43,54,30,12,69,34,34,25,60,43,32,24,44};
int avg , sum = 0;
int i ; 
int length = sizeof(age) / sizeof(age[0]);
for (i = 0 ; i < length ; i++)
   	sum += age[i] ;
    
  avg = sum / length ;
  
  printf("%d is the average age . ", avg);

return 0;
}/* A program for avg age */