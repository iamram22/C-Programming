#include <stdio.h>

int main(){
  int a = 5;
  int b = 12;
  int c = a + b;
  printf("value of a is %d, value of b is %d, and sum is %d\n", a, b, c);
  //modulus operator
  printf("The reminder when %d is divided by %d is %d", a, b, a % b);
}