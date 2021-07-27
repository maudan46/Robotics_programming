#include <stdio.h>

const char *in_filename = "Prueba.txt";
const char *out_filename = "Prueba2.txt";

int main() {
	
	FILE *archivo;
	FILE *archivo2;
	
	int c;
	
	archivo = fopen(in_filename, "r");
	if (archivo == NULL) {
		fprintf(stderr, "Problem opening %s for reading\n", in_filename);
		return(8);
	}
	

	archivo2 = fopen(out_filename, "w+");
	if (archivo2 == NULL) {
		fprintf(stderr, "Problem opening %s for writing\n", out_filename);
		return(8);
	}
	
	while (1) {
		
		
		c = fgetc(archivo);
		
		if (c == EOF) {
			break;
		}
		

		if (c == '\t') {
			fputc(' ', archivo2);
			fputc(' ', archivo2);
			fputc(' ', archivo2);
			fputc(' ', archivo2);
		} else {
			fputc(c, archivo2);
		}
	}
	
	fclose(archivo);
	fclose(archivo2);
	printf("The copy was executed, check the new file called 'Prueba2.txt'\n");		
	return(0);
}
