//Take three points and say if they all lies in one line

#include<stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3;
    float m1, m2;

    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);

    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    printf("Enter the value of x3: ");
    scanf("%d", &x3);
    printf("Enter the value of y3: ");
    scanf("%d", &y3);

    m1 = (float)(y2 - y1) / (x2 - x1);
    m2 = (float)(y3 - y2) / (x3 - x2);

    if (m1 == m2) {
        printf("All three points lie on the same line\n");
    } else {
        printf("No, the three points do not lie on the same line\n");
    }

    return 0;
}
