#include <stdio.h>

int main() 
{
    int distancia;
    int velocidad; 
    int tiempo;

    printf("Teclee la distancia que recorrerá el tren: ");
    scanf("%d", &distancia);

    velocidad = distancia / tiempo;

    printf("La velocidad a la que se moverá el tren es de %.2d km/h.\n", velocidad);

    printf("Tiempo que tomará en recorrer la distancia: ");
    scanf("%d", &tiempo);

    
}