#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;n-i<=1;i++){
        if (n%i==0){
         a = 1;
         break;
        }
    }
        if(n==1){ 
            printf("1 is neither a prime nor a composite");
        } else if(a==1) {
            printf("The number is composite");
        } else {
            printf("The number is prime");
    }

    return 0;
}