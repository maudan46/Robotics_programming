#include <stdio.h>

int main(void) {
  int m, h;
  printf("Ingresa la cantidad de minutos\n");
  scanf("%d", &m);

  h= m/60;
  m = m-h*60;

  if (h<2 && m<2) {
    printf("La cantidad de tiempo es %d hora %d  minuto\n", h, m);
  }
  if (h<2 && m>2) {
    printf("La cantidad de tiempo es %d hora %d  minutos\n", h, m);
  }
  if (h>2 && m>2) {
    printf("La cantidad de tiempo es %d horas %d  minutos\n", h, m);
  }
    if (h>2 && m<2) {
    printf("La cantidad de tiempo es %d horas %d  minuto\n", h, m);
  }
  return 0;
}
