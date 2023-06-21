#include <stdio.h>

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("%d es un numero par\n", num);
    }
    else {
        printf("%d es un numero impar\n", num);
    }

    return 0;
}