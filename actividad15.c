#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(){
	
	char resp1[20], resp2[20], resp3[20], res1[20], res2[20], res3[20];
	int puntaje = 0, j=0;
	
	strcpy(res1, "donatelo");
	strcpy(res2, "la piedad");
	strcpy(res3, "rafael");

	printf("ingresar la respuesta a la primera pregunta: ");
    scanf("%[^\n]s", resp1);
    getchar();

    printf("ingresar la respuesta a la segunda pregunta: ");
    scanf("%[^\n]s", resp2);
    getchar();

    printf("ingresar la respuesta a la tercera pregunta: ");
    scanf("%[^\n]s", resp3);
    getchar();

	for (j = 0; j < 20; j++){
		resp1[j] = tolower(resp1[j]);
		resp2[j] = tolower(resp2[j]);
		resp3[j] = tolower(resp3[j]);	
	}

	if (strcmp(res1,resp1) == 0) {
		puntaje = puntaje + 100;
	}
	if (strcmp(res2,resp2) == 0) {
		puntaje = puntaje + 100;
	}
	if (strcmp(res3,resp3) == 0){
		puntaje = puntaje + 100;
	}

	printf ("Puntaje obtenido: %i", puntaje);

}


