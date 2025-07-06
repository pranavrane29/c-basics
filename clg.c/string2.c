#include<stdio.h>
int xstrcpy(char *t, char *s);

int main() {
    char source[100]; 
    char target[20];

    printf("Enter the string - ");
    scanf("%99s", &source);

    xstrcpy(target, source);
    printf("Source string - %s", source);
    printf("\nTarget string - %s", target);

    return 0;
}
int xstrcpy(char *t, char *s) {
    while (*s != '\0') {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0'; 
}