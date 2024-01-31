#include <stdio.h>

int main() 
{
    float distancia;
    float velocidad; 
    float tiempo;

    printf("Distancia que recorrera el tren: \n");
    scanf("%f", &distancia);
    printf("La distacia recorrida es: %f\n", distancia);

    printf("Velocidad del tren\n");
    scanf("%f", &velocidad);
    printf("La Velocidad a la que va el tren es : %f\n", velocidad);
    
    tiempo = distancia / velocidad;

    printf("Tiempo que tomara en recorrer la distancia: %f", tiempo);
    
}