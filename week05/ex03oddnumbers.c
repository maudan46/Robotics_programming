#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 
#include <string.h> 

int main(void) {
  int f=4;
  float res;
  res= (((float)f/1)-((float)f/3)+((float)f/5)-((float)f/7)+((float)f/9)-((float)f/11)+(float)f/13)-((float)f/15)+((float)f/17)-((float)f/19);
  printf("%f\n",res);
  return 0;
}
