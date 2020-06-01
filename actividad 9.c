#include <stdio.h>

char main(){

	
	float cantidadAlimento, pesoPerro;
	//pedir los datos de entrada
	printf("Ingresar el peso del perro ");
	scanf("%f", &pesoPerro);
	//realizar las operaciones
	if (pesoPerro >= 15){		
		cantidadAlimento = pesoPerro * 0.02;
	}
	else {
		cantidadAlimento = pesoPerro * 0.02 + 0.1;
	}
	//mostrar resultados
	printf("la cantidad de alimento que hay que darle diariamente al perro es de %f kg", cantidadAlimento);
}
