#include <stdio.h>

typedef struct
{
    int grados;
    int min;
    int seg;
} TAngulo;

TAngulo sumAngulos (TAngulo, TAngulo);

int main(void)
{
    TAngulo angulo1;
    TAngulo angulo2;
    TAngulo angulo3;
    TAngulo sumaParcial;
    TAngulo sumaTotal;

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


    sumaParcial = sumAngulos(angulo1, angulo2);
    sumaTotal = sumAngulos(sumaParcial, angulo3);

    printf("%i? %i' %i'' \n", sumaTotal.grados, sumaTotal.min, sumaTotal.seg);

}

TAngulo sumAngulos (TAngulo a1, TAngulo a2)
{
    TAngulo result;
    int sumaGrad = 0;
    int sumaMin = 0;
    int sumaSeg = 0;

    sumaGrad = a1.grados + a2.grados;
    sumaMin = a1.min + a2.min;
    sumaSeg = a1.seg + a2.seg;

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

    result.grados = sumaGrad;
    result.min = sumaMin;
    result.seg = sumaSeg;

    return result;
}
