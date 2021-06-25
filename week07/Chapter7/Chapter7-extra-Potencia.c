#include <stdio.h>

//Programa para calcular la potencia de un numero seleccionado por el usuario, a un número elegido opr el usuario.

int main(void) {
  char line[100];
  int num,n,pot, p=1;
  printf("Escriba el numero que quiere elevar a la n potencia\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &num);
  printf("Escriba el valor de la potencia n\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &n);
  
  pot=num;

  while (p<n) {

    pot=pot*num;
    p++;
  }

  printf("El valor de %d^%d=%d\n",num,n,pot);

  return 0;
}
