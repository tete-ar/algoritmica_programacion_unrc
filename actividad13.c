#include <stdio.h>

char main (){
	
	float tiempo1, tiempo2,tiempo3;
	
	printf("Ingresar el primer tiempo: ");
	scanf("%f", &tiempo1);
	printf("Ingresar el segundo tiempo: ");
	scanf("%f", &tiempo2);
	printf("Ingresar el tercer tiempo: ");
	scanf("%f", &tiempo3);

	if (tiempo1<tiempo2 && tiempo1<tiempo3 && tiempo2<tiempo3){
		printf("1-%f 2-%f 3-%f", tiempo1, tiempo2, tiempo3);
	}	
	else if (tiempo1<tiempo2 && tiempo1<tiempo3 && tiempo3<tiempo2){
		printf("\n%f \n%f \n%f", tiempo1, tiempo3, tiempo2);
	}
	else if (tiempo2<tiempo1 && tiempo2<tiempo3 && tiempo1<tiempo3){
		printf("\n%f \n%f \n%f", tiempo2, tiempo1, tiempo3);
	}
	else if (tiempo2<tiempo1 && tiempo2<tiempo3 && tiempo3<tiempo1){
		printf("\n%f \n%f \n%f", tiempo2, tiempo3, tiempo1);
	}
	else if (tiempo3<tiempo1 && tiempo3<tiempo2 && tiempo1<tiempo2){
		printf("\n%f \n%f \n%f", tiempo3, tiempo1, tiempo2);
	}
	else if (tiempo3<tiempo1 && tiempo3<tiempo2 && tiempo2<tiempo1){
		printf("\n%f \n%f \n%f", tiempo3, tiempo2, tiempo1);
	}
}
