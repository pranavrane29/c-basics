#include <stdio.h>
int xstrlen(char *s);

int main() {
    char arr1[100], arr2[100]; 
    int len1, len2;

    printf("Enter the first string- ");
    scanf("%99s", &arr1);
    len1 = xstrlen(arr1);

    printf("Enter the second string- ");
    scanf("%99s", &arr2);
    len2 = xstrlen(arr2);

    printf("String 1 = %s,\tLength = %d", arr1, len1);
    printf("\nString 2 = %s,\tLength = %d", arr2, len2);
    return 0;
}

int xstrlen(char *s) {
    int length = 0;

    while (*s != '\0') {
        length++; 
        s++;     
    }

    return length;
}