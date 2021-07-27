#include <stdio.h>

//Calculadora de IMC para hombres adultos

int 
	main(void) {
	
	FILE *archivo;
	archivo=fopen("Prueba.txt","rb");
	float kg,alt,alt2,imc;
	
	if (archivo == NULL){
		perror("Error en la apertura del archivo\n");
		return 1;
	}
	while (feof(archivo )== 0){
		fscanf(archivo, "%f %f\n", &kg, &alt);
	}
	
	char line[100];
	printf("Ingrese su peso en kg\n");
	printf("%f\n", kg);
	printf("Ingrese su altura en metros\n");
	printf("%f\n", alt);

	
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
	printf("Se ha leído el archivo correctamente...");
	
	return 0;
}
