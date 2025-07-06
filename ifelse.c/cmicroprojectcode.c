//C microproject 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void addition();
void subtraction();
void multiplication();
void division();
void power();
void squareroot();
void sinefunction();
void cosinefunction();
void tangentfunction();

int main(){
    int choice;

    while(1){
        printf("\nWelcome to Scientific Calculator! Pls select the option from 1 to 10 -\n");
        printf("1.Addition\n"); 
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Power\n");
        printf("6.Square Root\n");
        printf("7.Sine\n");
        printf("8.Cosine\n");
        printf("9.Tangent\n");
        printf("10.Exit!\n");
        printf("Enter your choice -\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
              addition();
              break;
            
            case 2:
              subtraction();
              break;  

            case 3:
              multiplication();
              break;  

            case 4:
              division();
              break;  

            case 5:
              power();
              break;  

            case 6:
              squareroot();
              break;  

            case 7:
              sinefunction();
              break;  

            case 8:
              cosinefunction();
              break;  

            case 9:
              tangentfunction();
              break; 
              
            case 10:
            exit(0);
            
            default:
            printf("Pls select from 1 to 10 , Sir/Maam\n");
        }
    }
    return 0;
}

//Functions Start from here -

void addition(){
    double a,b;
    printf("Enter two numbers -");
    scanf("%lf %lf",&a ,&b);
    printf("Result - %lf",a + b);
}

void subtraction(){
    double a,b;
    printf("Enter two numbers -");
    scanf("%lf %lf",&a ,&b);
    printf("Result - %lf",a - b);
}

void multiplication(){
    double a,b;
    printf("Enter two numbers -");
    scanf("%lf %lf",&a ,&b);
    printf("Result - %lf",a * b);
}

void division(){
    double a,b;
    printf("Enter two numbers -");
    scanf("%lf %lf",&a ,&b);
      if (b==0)
        printf("My friend , we cannot divide anything by 0\n");
      else
      printf("Result - %lf\n",a/b);
}    

void power(){
    double base , exp ;
    printf("Enter the base value -");
    scanf("%lf",&base);
    printf("Enter the power -");
    scanf("%lf",&power);
    printf("Result - %lf\n",pow(base,exp));
}

void squareroot(){
    double num;
    printf("Enter any no -");
    scanf("%lf",&num);
      if (num < 0)
        printf("My Friend , Squareroot of a negative number do not exist\n");
      else
      printf("Result - %lf\n",sqrt(num));
}

void sinefunction(){
    double angle;
    printf("Enter the angle in degrees -");
    scanf("%lf",&angle);
    printf("Result - %lf\n",sin(angle * M_PI / 180));
}

void cosinefunction(){
    double angle;
    printf("Enter the angle in degrees -");
    scanf("%lf",&angle);
    printf("Result - %lf\n",cos(angle * M_PI / 180));
}

void tangentfunction(){
    double angle;
    printf("Enter the angle in degrees -");
    scanf("%lf",&angle);
      if ((int)angle % 90 == 0 && (int)angle/90 % 2!= 0)
       printf("My friend , tangent is undefined at this angle\n");
       else
       printf("Result - %lf\n",tan(angle * M_PI / 180));
}