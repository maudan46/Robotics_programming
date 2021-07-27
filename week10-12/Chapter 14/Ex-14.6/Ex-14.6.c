#include <stdio.h>


const char *Mailing = "Prueba.txt";



int main() {
	
	FILE *archivo;
	
	char line[100];
	char Name[100];
	char Lname[100];
	char Add[100];
	char Phone[100];
	char Zip[100];
	
	
	
	
	
	archivo = fopen(Mailing, "r");
	if (archivo == NULL) {
		fprintf(stderr, "Problem opening %s for reading\n", archivo);
	}
	while ((fscanf(archivo, "%[^\n]", line))!= EOF)
	{
		fscanf(archivo,"%s %s %s %s %s", Name, Lname, Add, Zip,Phone);
		
	}
	
	printf("First Name: ");
	printf( "%s\n",Name);
	
	printf("Last Name: ");
	printf( "%s\n",Lname);
	
	printf("Adress: ");
	printf("%s\n",Add);
	
	printf("Zip Code: ");
	printf("%s\n",Zip);
	
	printf("Cellphone: ");
	printf("%s\n",Phone);
	printf("\n\n");
	
	
	
	printf("The file was read sucesfully\n");
	fclose(archivo);
	
	return(0);
}
