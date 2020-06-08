#include <stdio.h>

//defino la estructura del tipo TAngulo.
typedef struct
{
    int grados;
    int min;
    int seg;
} TAngulo;

//inicializo la funcion sin darle parametros, nada mas los tipos que va a recibir.
TAngulo sumAngulos (TAngulo, TAngulo);

//funcion principal.
int main(void)
{
    //declaro las variables que voy a usar.
    TAngulo angulo1;
    TAngulo angulo2;
    TAngulo angulo3;
    TAngulo sumaParcial;
    TAngulo sumaTotal;
    int sumaCheck;

    //ingreso de datos de los angulos.
    printf("Grados del primer angulo: ");
    scanf("%i", &angulo1.grados);

    printf("Minutos del primer angulo: ");
    scanf("%i", &angulo1.min);

    printf("Segundos del primer angulo: ");
    scanf("%i", &angulo1.seg);

    printf("Grados del segundo angulo: ");
    scanf("%i", &angulo2.grados);

    printf("Minutos del segundo angulo: ");
    scanf("%i", &angulo2.min);

    printf("Segundos del segundo angulo: ");
    scanf("%i", &angulo2.seg);

    printf("Grados del tercer angulo: ");
    scanf("%i", &angulo3.grados);

    printf("Minutos del tercer angulo: ");
    scanf("%i", &angulo3.min);

    printf("Segundos del tercer angulo: ");
    scanf("%i", &angulo3.seg);

    //checkeo si los datos ingresados son validos.
    if (angulo1.min >= 60 || angulo2.min >= 60 || angulo3.min >= 60)
    {
        return printf("ingresa valores de minutos validos.\n");
    }
    else if (angulo1.seg >= 60 || angulo2.seg >= 60 || angulo3.seg >= 60)
    {
        return printf("ingresa valores de segundos validos.\n");
    }

    sumaCheck = angulo1.grados + angulo2.grados + angulo3.grados;

    if (sumaCheck > 180)
    {
        return printf("ingresa valores de grados validos.\n");
    }

    //hago 2 sumas, primero una parcial de los primeros 2 angulos y luego otra con el 3er angulo.
    sumaParcial = sumAngulos(angulo1, angulo2);
    sumaTotal = sumAngulos(sumaParcial, angulo3);

    //printeo los resultados.
    printf("%i° %i' %i''\n", sumaTotal.grados, sumaTotal.min, sumaTotal.seg);

}

//funcion que utilizo para sumar los angulos.
TAngulo sumAngulos (TAngulo a1, TAngulo a2)
{
    //declaro variables locales a usar.
    TAngulo result;
    int sumaGrad = 0;
    int sumaMin = 0;
    int sumaSeg = 0;

    //genero las sumas totales de los grados, minutos y segundos de los 2 angulos.
    sumaGrad = a1.grados + a2.grados;
    sumaMin = a1.min + a2.min;
    sumaSeg = a1.seg + a2.seg;

    //acomodo los numeros de los minutos y segundos para que sean menores a 60.
    if (sumaSeg >= 60)
    {
        sumaSeg -= 60;
        sumaMin += 1;
    }

    if (sumaMin >= 60)
    {
        sumaMin -= 60;
        sumaGrad += 1;
    }

    //guardo los resultados en otra variable del mismo tipo.
    result.grados = sumaGrad;
    result.min = sumaMin;
    result.seg = sumaSeg;

    //retorno el resultado de tipo TAngulo
    return result;
}