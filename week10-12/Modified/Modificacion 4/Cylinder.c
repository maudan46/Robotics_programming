#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 
#define pi 3.141592

int main(void) {
	
	FILE *archivo;
	archivo=fopen("Prueba.txt","rb");
	
	float r1,h1,area,vol;
	if (archivo == NULL){
		perror("Error en la apertura del archivo\n");
		return 1;
	}
	while (feof(archivo )== 0){
		fscanf(archivo, "%f %f\n", &r1, &h1);
	}
	printf("Ingresa el radio\n");
	printf("%f\n",r1);
	printf("Ingresa la altura\n");
	printf("%f\n",h1);
	area= (((2 * pi) * (r1) * (h1)) + ((2 * pi) * (r1 * r1)));
	vol= ((pi * (r1 * r1)) * h1);
	printf("El area es %f\n",area);
	printf("y el volumen es %f\n",vol);
	return 0;
}
