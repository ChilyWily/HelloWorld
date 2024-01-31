#include <stdio.h>
#include <math.h>

int main()
{
    float calificacion1;
    float calificacion2;
    float calificacion3;
    float calificacion4;
    float calificacion5;
    float promedio;

printf("Escriba la primer calificacion \n");
scanf("%f",&calificacion1);

printf("Escriba la segunda calificacion \n");
scanf("%f",&calificacion2);

printf("Escriba la tercer calificacion \n");
scanf("%f",&calificacion3);

printf("Escriba la cuarta calificacion \n");
scanf("%f",&calificacion4);

printf("Escriba la quinta calificacion \n");
scanf("%f",&calificacion5);

promedio = (calificacion1+calificacion2+calificacion3+calificacion4+calificacion5)/5;

printf("El promedio es,%f\n", promedio);


 }