#include <stdio.h>

int main(void) {
  char name[100];
  char apellido[100];
  char birth[100];
  char num[100];
  printf("Escriba su nombre\n");
  scanf("%s", name);
  printf("Escriba su primer apellido\n");
  scanf("%s", apellido);
  printf("Escriba su numero del seguro social\n");
  scanf("%s", num);
  printf("Escriba su fecha de nacimiento en el formato DD/MM/AA\n");
  scanf("%s",birth);
  printf("Nombre: %s %s\n", name, apellido);
  printf("Numero del seguro Social: %s\n",num);
  printf("Fecha de nacimiento: %s\n",birth);
  return 0;
}
