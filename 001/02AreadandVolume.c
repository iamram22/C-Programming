#include <stdio.h>

int main(){
  int r = 6;
  int h = 8;
  printf("The area of the circle with radius %d is : %.2f\n", r, 3.14 * r * r);

  printf("The volume of the cylinder with radius %d and height %d is : %d", r, h, 3.14 * r * r * h);
  return 0;
}