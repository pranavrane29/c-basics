#include<stdio.h>
int main(){
    int x=3,y,z;
    y = x = 10;  // x will be 10 as the value got updated from 3 to 10 
    //y will also be 10 
    z = x < 10; // z will get the value of 0 because of boolean data type
    printf("\nx = %d y = %d z = %d",x ,y,z);
    return 0;
}  

/*The Boolean data type is a simple yet essential data type
 in programming and computer science. It represents one of 
 two possible values: true or false. This binary nature 
 makes it incredibly useful for decision-making and logical
  operations within programs.

Here's a quick rundown:

True: Often represented as 1 in binary terms.

False: Typically represented as 0*/