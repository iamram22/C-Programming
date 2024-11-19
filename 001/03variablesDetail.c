#include <stdio.h>

int main(){
  //variable is the name of memory locaton.
  int i = 10;
  int j = i;
  int a = 1, b = 2, c = 3;
  // "%" is format specifier.
  // %d is for int, %f is for float, %c is for char.
  printf("The value of i is %d, and the value of j is %d", i, j);
  return 0;
}