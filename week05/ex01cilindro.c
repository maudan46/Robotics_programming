#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 
#define pi 3.141592

int main(void) {
  float r1,h1,area,vol;
  printf("Ingresa el radio\n");
  scanf("%f",&r1);
  printf("Ingresa la altura\n");
  scanf("%f",&h1);
  area= (((2 * pi) * (r1) * (h1)) + ((2 * pi) * (r1 * r1)));
  vol= ((pi * (r1 * r1)) * h1);
  printf("El area es %f\n",area);
  printf("y el volumen es %f\n",vol);
  return 0;
}
