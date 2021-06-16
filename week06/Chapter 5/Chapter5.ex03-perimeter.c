#include <stdio.h>

int main(void) {
  float per,h,w;
  printf("Ingresa la altura del rectángulo\n");
  scanf("%f",&h);
  printf("Ingresa el ancho del rectángulo\n");
  scanf("%f", &w);

  per= 2* (h + w);

  printf("El perimetro del rectángulo es: %f\n", per);
  return 0;
}
