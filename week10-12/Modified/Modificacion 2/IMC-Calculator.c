#include <stdio.h>

//Calculadora de IMC para hombres adultos

int main(void) {
	
	FILE *archivo;
	archivo=fopen("Prueba.txt","w");
	
	char line[100];
	float kg,alt,alt2,imc;
	printf("Ingrese su peso en kg\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &kg );
	printf("Ingrese su altura en metros\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &alt );
	
	alt2=alt*alt;
	imc= kg/alt2;
	
	if ((imc>18.5) && (imc<25)) {
		printf("Tu IMC es de %f y está en un rango normal\n",imc);
		fprintf(archivo,"Peso: %f\nAltura: %f m\nTu IMC es de %f y está en un rango normal\n",kg,alt,imc);
	}
	else if ((imc>24.9) && (imc<30)) {
		printf("Tu IMC es de %f y está en un rango de sobrepeso\n",imc);
		fprintf(archivo,"Peso: %f\nAltura: %f m\nTu IMC es de %f y está en un rango de sobrepeso\n",kg,alt,imc);
	}
	else if ((imc>29.9)) {
		printf("Tu IMC es de %f y está en un rango de obesidad\n",imc);
		fprintf(archivo,"Peso: %f\nAltura: %f m\nTu IMC es de %f y está en un rango de obesidad\n",kg,alt,imc);
	}
	else {
		printf("Tu IMC es de %f y está en un rango por debajo del peso normal\n",imc); 
		fprintf(archivo,"Peso: %f\nAltura: %f m\nTu IMC es de %f y está por debajo del rango normal\n",kg,alt,imc);
	}
	fclose(archivo);
	return 0;
}
