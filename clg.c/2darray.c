// C Program to illustrate 2d array input from user
#include <stdio.h>
int main()
{
    int arr[2][3];
    printf("Enter elements for 2x3 array:\n");
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("Element %d %d: ", i, j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2D Array:\n");
    for (int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
