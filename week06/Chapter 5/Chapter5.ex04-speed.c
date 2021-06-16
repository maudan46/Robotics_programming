#include <stdio.h>

int main(void) {
  float km,mile;
  printf("Ingresa la cantidad de kilometros recorridos en una hora\n");
  scanf("%f",&km);

  mile= km * 0.6213712;

  printf("La velocidad fue de %f mph\n", mile);
  return 0;
}
