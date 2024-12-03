#include <stdio.h>

int main(void){
  int a =1, b =1, c =1;
  int x;

  a += b +=c;

  x = -a * b / -c * b;
  printf("a = %d, b = %d, c = %d, x = %d", a, b, c, x);
  return 0;
}
