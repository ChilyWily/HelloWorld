#include <stdio.h>

int main() 
{
    float precioBase, impuestoAplicado, costoEnvio, costoTotal;

    printf("Teclee  el precio base del producto:\n ");
    scanf("%f", &precioBase);
    
    printf("Teclee  el porcentaje de impuesto aplicado:\n ");
    scanf("%f", &impuestoAplicado);
   
    printf("Teclee  el costo de envio:\n ");
    scanf("%f", &costoEnvio);

    costoTotal = precioBase + (precioBase * (impuestoAplicado / 100)) + costoEnvio;

    printf("Costo total: %f", costoTotal);

}