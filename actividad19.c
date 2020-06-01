#include<stdio.h>
#include<math.h>

typedef struct
{
    int x, y;
}
Tpunto;

double distanciaX(Tpunto *, Tpunto *);
double distanciaY(Tpunto *, Tpunto *);
double distancia(double, double);

int main(void)
{
    Tpunto punto1;
    Tpunto punto2;
    printf("Ingresar x1: ");
    scanf("%i", &punto1.x);
    printf("Ingresar y1: ");
    scanf("%i", &punto1.y);
    printf("Ingresar x2: ");
    scanf("%i", &punto2.x);
    printf("Ingresar y2: ");
    scanf("%i", &punto2.y);
    double distX = distanciaX(&punto1, &punto2);
    double distY = distanciaY(&punto1, &punto2);

    printf("%f", distancia(distX, distY));
    return 0;
}

double distanciaX (Tpunto *p1, Tpunto *p2)
{
    double distanciaX = pow(p1->x - p2->x, 2);
    return distanciaX;
}

double distanciaY(Tpunto *p1, Tpunto *p2)
{
    double distanciaY = pow((p1->y - p2->y), 2);
    return distanciaY;
}

double distancia(double distanciaX, double distanciaY)
{
    double distancia = sqrt(distanciaX + distanciaY);
    return distancia;
}
