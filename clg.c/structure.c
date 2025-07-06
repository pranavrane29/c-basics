#include <stdio.h>

struct class {
  int sr_no;
  char name[50];
};

int main() {
  struct class student1  = { 1  , "PRANAV"};
  struct class student2  = { 2  , "ROHIT"};
  struct class student3  = { 3  , "SUMIT"};

  printf("%d %s\n", student1.sr_no, student1.name);
  printf("%d %s\n", student2.sr_no, student2.name);
  printf("%d %s\n", student3.sr_no, student3.name);
  return 0;
}