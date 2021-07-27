#include <stdio.h>

const char *in_filename = "Prueba.txt";
const char *divisible = "Divisible.txt";
const char *notdiv = "Not Divisible.txt";


int main() {
	
	FILE *archivo;
	FILE *archivo2;
	FILE *archivo3 ;
	
	int c;
	char line[100];
	
	archivo = fopen(in_filename, "r");
	if (archivo == NULL) {
		fprintf(stderr, "Problem opening %s for reading\n", in_filename);
		return(8);
	}
	

	archivo2 = fopen(divisible, "w+");
	if (archivo2 == NULL) {
		fprintf(stderr, "Problem opening %s for writing\n", divisible);
		return(8);
	}
	archivo3 = fopen(notdiv, "w+");
	if (archivo3 == NULL) {
		fprintf(stderr, "Problem opening %s for writing\n", notdiv);
		return(8);
	}

	while (fgets(line, sizeof(line), archivo)) {
		sscanf(line, "%d", &c);
		if ((c % 3) == 0) {
			
			fprintf(archivo2, "%d\n", c);
		} else {
			
			fprintf(archivo3, "%d\n", c);
		}
	}
	
	fclose(archivo);
	fclose(archivo2);
	
	printf("The copy was executed, The new file with the divisible numbers is called 'Divisible.txt', and the file with the numbers that are not divisible is called 'Not-Divisible.txt\n");
	
	return(0);
}
