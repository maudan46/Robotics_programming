#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main(void) {
  float rad, vol;
  printf("Ingrese el radio de la esfera\n");
  scanf("%f", &rad);

  vol= (rad*4/3)* pi ;

  printf("El volumen de la esfera es: %f\n", vol);
  return 0;
}
