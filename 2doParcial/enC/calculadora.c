#include <stdio.h>

float sumar(float num1, float num2) {
    return num1 + num2;
}

float restar(float num1, float num2) {
    return num1 - num2;
}

float multiplicar(float num1, float num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("No se puede dividir por cero.\n");
        return 0;
    }
}

int main() {
    char operador;
    float num1, num2, resultado;
    
    printf("Ingrese el operador (+, -, *, /): ");
    scanf("%c", &operador);
    
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
    
    switch(operador) {
        case '+':
            resultado = sumar(num1, num2);
            printf("%.2f + %.2f = %.2f", num1, num2, resultado);
            break;
        case '-':
            resultado = restar(num1, num2);
            printf("%.2f - %.2f = %.2f", num1, num2, resultado);
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            printf("%.2f * %.2f = %.2f", num1, num2, resultado);
            break;
        case '/':
            resultado = dividir(num1, num2);
            if (resultado != 0) {
                printf("%.2f / %.2f = %.2f", num1, num2, resultado);
            }
            break;
        default:
            printf("Operador invalido.");
    }
    
    return 0;
}