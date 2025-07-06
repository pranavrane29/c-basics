#include<stdio.h>
int main()
{
    int i = 1, j;
    while (i <= 10)
    {
        j = 1;
        while (j <= 10)
        {
            printf("*");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }
    return 0;
}
