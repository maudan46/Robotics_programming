#include <stdio.h>

//Calculadora de IMC para hombres adultos

int main(void) {
  char line[100];
  float kg,alt,imc;
  printf("Ingrese su peso en kg\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &kg );
  printf("Ingrese su altura en metros\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &alt );

  alt=alt*alt;
  imc= kg/alt;

  if ((imc>18.5) && (imc<25)) {
    printf("Tu IMC es de %f y está en un rango normal\n",imc);
  }
  else if ((imc>24.9) && (imc<30)) {
    printf("Tu IMC es de %f y está en un rango de sobrepeso\n",imc);
  }
  else if ((imc>29.9)) {
    printf("Tu IMC es de %f y está en un rango de obesidad\n",imc);
  }
  else {
   printf("Tu IMC es de %f y está en un rango por debajo del peso normal\n",imc); 
  }
  return 0;
}
