#include <stdio.h>

int main()
{
    int lado;
    int resultadoArea;
    int perimetro;
    int resultadoPerimetro;

    printf("Teclee el lado del cuadrado");
    scanf("%d",&lado);
    resultadoArea = lado^2;

    printf("El area es: %d", resultadoArea);

    printf("Calcular el perimetro");
    printf("Teclee el perimetro");
    scanf("%d", &lado);

    resultadoPerimetro = lado+lado+lado+lado;

    printf("El perimetro es: %d", resultadoPerimetro);
    


    }
