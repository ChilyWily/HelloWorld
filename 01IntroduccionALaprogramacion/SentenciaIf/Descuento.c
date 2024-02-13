#include <stdio.h>

int main() {
    float precio, precioDescuento;

    printf("Precio del articulo: \n");
    scanf("%f", &precio);

    if (precio >= 200) {
        precioDescuento = precio - (precio * 0.15);
        printf("Disponible 15%% de descuento, Precio final: $%.f\n", precioDescuento);
    } else {
        printf("Costo del articulo: $%.f\n", precio);
    }

}