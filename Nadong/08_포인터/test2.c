#include <stdio.h>
int main() {
  int a;
  int b;
  int *p;

  p = &a;
  *p = 2;
  p = &b;
  *p = 4;

  printf("%d\n", a);
  printf("%d\n", b);
  return 0;
}