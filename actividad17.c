#include <stdio.h>

void main(){
	int v1, v2, centro, radio, punto;
	
	printf("primer vertice: ");
	scanf("%i", &v1);
	printf("segundo vertice: ");
	scanf("%i", &v2);
	printf("centro del circulo: ");
	scanf("%i", &centro);
	printf("radio del circulo: ");
	scanf("%i", &radio);
	printf("punto problema: ");
	scanf("%i", &punto); 
	
	if(v2>v1){
		if(punto<=v2 && punto>=v1 && punto<=centro+radio && punto>=centro-radio){
			printf("El Punto es interior al circulo y al rectangulo");
		}	
		else if(punto<=v2 && punto>=v1){
			printf("El Punto es interior al rectangulo.");
		}
		else if(punto<=centro+radio && punto>=centro-radio){
			printf("El Punto es interior al circulo");
		}
		else{
			printf("El Punto es exterior al circulo y al rectangulo.");
		}
	}
	
	if(v2<v1){
		if(punto<=v1 && punto>=v2 && punto<=centro+radio && punto>=centro-radio){
			printf("El Punto es interior al circulo y al rectangulo");
		}	
		else if(punto<=v1 && punto>=v2){
			printf("El Punto es interior al rectangulo.");
		}
		else if(punto<=centro+radio && punto>=centro-radio){
			printf("El Punto es interior al circulo");
		}
		else{
			printf("El Punto es exterior al circulo y al rectangulo.");
		}
	}
}
