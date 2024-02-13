#include <stdio.h>

int main() {
    int numero;

    printf("Teclee cualquier numero: \n ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

} 