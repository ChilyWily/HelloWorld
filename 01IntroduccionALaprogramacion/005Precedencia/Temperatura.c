#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    printf("Teclee la temperatura en grados celsius: \n ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("Temperatura en grados tahrenheit: %f \n", fahrenheit);


    printf("Teclee la temperatura en grados fahrenheit: \n ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperatura en grados celsius es: %f", celsius);

}