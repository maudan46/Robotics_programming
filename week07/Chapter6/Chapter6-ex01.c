#include <stdio.h>
#include <math.h>


int main(void) {
  
  float x1,y1,x2,y2,distance;
  char line[100]; 

  printf("Inserta las coordenada X del primer punto\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &x1);
  printf("Ingresa la coordenada y del primer punto\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &y1);
  printf("Inserta las coordenada X del segundo punto\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &x2);
  printf("Ingresa la coordenada y del segundo punto\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &y2);

  distance= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  
  printf("La distancia entre los puntos (%f , %f) y (%f , %f) es de %f.\n",x1,y1,x2,y2,distance);

  return 0;
}
