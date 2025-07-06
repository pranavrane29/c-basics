#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  struct myStructure s1;

  printf("Enter the value of myNum: ");
  scanf("%d", &s1.myNum);

  printf("Enter the value of myLetter: ");
  fflush(stdin);
  scanf(" %c", &s1.myLetter);

  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
