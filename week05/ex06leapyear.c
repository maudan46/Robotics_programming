#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include <string.h>

int main(void) {
  int año,c;
  printf("Inserte el año\n");
  scanf("%d",&año);
  if (año % 4 == 0) {
    if (año % 100 == 0) {
      if (año % 400 == 0) {
        printf("El año es biciesto\n");
      }
      else {
        printf("No es biciesto\n");
      }
    }
    else {
      printf("No es biciesto\n");
    }
  }
  else {
   printf("No es biciesto\n");
 }
  return 0;
}
