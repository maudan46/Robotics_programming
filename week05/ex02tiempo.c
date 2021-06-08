#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 

int main(void) {
  int hrs,min,seg,segundos;
  printf("Ingrese la cantidad de segundos\n");
  scanf("%d",&seg);
  hrs=(seg / 60 / 60);
  min=(((seg)-(hrs*3600))/60);
  segundos=((seg)-(hrs*3600)-(min*60));
  printf("La cantidad de tiempo es %d",hrs);
  printf(":%d",min);
  printf(":%d\n",segundos);
  return 0;
}
