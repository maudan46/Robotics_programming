#include <stdio.h>

int main(void) {
  int x;
  float y;
  char hello[10] = "Hola";
  x= 2;
  y= 5.5;
 
  printf("Mistake one: %d\n", y);
  printf("Mistake two: %f\n", x);
  printf("Mistake three: %d\n", hello);
  return 0;
}
