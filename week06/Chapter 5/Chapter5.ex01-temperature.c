#include <stdio.h>
#include <math.h>

int main(void) {
  float c,f,div;
  printf("Ingresa la temperatura en grados centígrados\n");
  scanf("%f",&c);
  f= (c*9/5)+32;
  printf("La temperatura es de %f grados farenheit.\n",f);
  return 0;
}
