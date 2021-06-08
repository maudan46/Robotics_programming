#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include <string.h>

int main(void) {
  char nameu[100];
  char named[100];
  char namet[100];
  float u,d,t,c,c1,c2,c3;

  //Primera persona
  printf("Ingresa el nombre de la primera persona\n");
  scanf("%s",nameu);
  printf("Ingresa la cantidad invertida por %s\n",nameu);
  scanf("%f",&u);
  
  //Segunda persona
  printf("Ingresa el nombre de la segunda persona\n");
  scanf("%s",named);
  printf("Ingresa la cantidad invertida por %s\n",named);
  scanf("%f",&d);

  //Tercera persona
  printf("Ingresa el nombre de la tercera persona\n");
  scanf("%s",namet);
  printf("Ingresa la cantidad invertida por %s\n",namet);
  scanf("%f",&t);

 //Operaciones
  c= (u + d + t);
  c1= ((u*100)/(c));
  c2= ((d*100)/(c));
  c3= ((t*100)/(c));
  
  printf("El porcentaje de inversión de %s es de %f.\n",nameu,c1);
  printf("El porcentaje de inversión de %s es de %f.\n",named,c2);
  printf("El porcentaje de inversión de %s es de %f.\n",namet,c3);
  return 0;
}
