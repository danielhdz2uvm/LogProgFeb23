// Ejemplo sobre funciones en C
#include <stdio.h>
int ardilla(){
    int algo=3;
return algo;
}

void funcion_que_no_devuelve(){
    printf("Esta función no de vuelve nada \n");
}

int cuadrado(int numero){
    int cuad=numero*numero;
    return cuad;
}

int main () {
    int x;
    printf("Hola \n");
    x=ardilla();
    printf("%d \n",x);
    funcion_que_no_devuelve();

    int n=5,resultado;

    resultado=cuadrado(n);
    printf("%d\n",resultado);

    return 0;
}