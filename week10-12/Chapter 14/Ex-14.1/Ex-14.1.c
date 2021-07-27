#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h> 
#define pi 3.141592

int main(void) {
	
	FILE *archivo;
	archivo=fopen("Prueba.txt","r");
	
	int count=0;
	char line;
	if (archivo == NULL){
		perror("Error en la apertura del archivo\n");
		return 1;
	}
	for (line = getc(archivo); line != EOF; line = getc(archivo)) {
		if (line == '\n')
			++count;
	}
	printf("The number of lines is %d\n", count);

	return 0;
}
