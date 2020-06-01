#include <stdio.h>
#include <math.h>

/*  DISEÑO DEL PROGRAMA
Lexico

x, y, xc, yc , p, radio e R

Inicio

Entrada: x, y, xc, yc, radio

p <--- ((y-yc)*(y-yc) + (x-xc)*(x-xc))**1/2 

salida: operador logico de condicion, si p es <= al radio entonces esta dentro del circulo y si no, esta fuera.

*/
int main() {
	
	float x, y, xc, yc, p, radio; 
	
	printf("ingresar valor de x: ");
	scanf("%f", &x);
	printf("ingresar valor de y: ");
	scanf("%f", &y);
	printf("ingresar valor de xc: ");
	scanf("%f", &xc);
	printf("ingresar valor de yc: ");
	scanf("%f", &yc);
	printf("ingresar valor del radio: ");
	scanf("%f", &radio);
	
	p = sqrt((y-yc)*(y-yc) + (x-xc)*(x-xc));
	
	if (p <= radio){ 
		printf("Dentro del circulo");
	}	
		else {
			printf("Fuera del circulo");
		};
		 
}

