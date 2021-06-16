#include <stdio.h>

int main(void) {
  int hour, minutes, time;
  char h[10] , m[10] ;
  printf("Ingresa el tiempo: (ejemplo: 1 hora 30 minutos)\n");
  scanf("%d %s %d %s", &hour, h, &minutes , m);

  time= hour * 60 + minutes;
  
  printf("El tiempo es de %d minutos\n", time);

  return 0;
}
