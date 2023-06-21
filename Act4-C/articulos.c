#include <stdio.h>

int main() {
    int n, i;
    float cantidad, precio, total = 0;
    
    printf("Ingrese el número de artículos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Artículo %d\n", i);
        printf("Ingrese la cantidad: ");
        scanf("%f", &cantidad);
        printf("Ingrese el precio: ");
        scanf("%f", &precio);

        total += cantidad * precio;
    }

    printf("El total a pagar es: %.2f\n", total);

    return 0;
}