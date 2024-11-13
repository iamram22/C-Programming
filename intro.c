#include <stdio.h>

int main (void) {
  int i;
  int j;

  i = 3;
  printf("i = %d\n", i);

  j = i++;
  printf("j = %d\n", i, j);

  j = ++i;
  printf("j = %d\n", j);

  i = ++i;
  printf("++i = %d\n", i);

  i = i++;
  printf("++i = %d\n", i);

  i = --i;
  printf("--i = %d\n", i);

  int x = 10;
  int y = 20;
  printf("x = %d\n, y = %d\n", x, y);

  int a;
  a = x = 10;
  y = 20;
  printf("a = %d, x = %d, y = %d\n", a, x, y);

  a = x = 10, y = 20;
  printf("a =%d, x = %d, y = %d\n", a, x, y);

  a = (x = 10, y = 20);
  printf("a =%d, x = %d, y = %d\n", a, x, y);
}