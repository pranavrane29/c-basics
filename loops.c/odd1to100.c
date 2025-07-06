#include <stdio.h>
int main(){
    char a = 1;
    printf("%d\t",a);
   for (int i = 2; i <= 100; i++)
   {
    if (i%2==0)
   continue; // continue is used to skip one iteration if the statement stands true
   printf("%d\t",i);  
   }
  

    return 0;

}