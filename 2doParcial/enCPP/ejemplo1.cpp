// Ejemplo sobre funciones en C++
#include <iostream>
using namespace std;

int ardilla(){
    int algo=3;
return algo;
}

void esta_funcion_no_devuelve(){
    cout<<"Esta función no de vuelve nada \n";
}

int cuadrado (int numero){
    int cuad=numero*numero;
    return cuad;
}

int main () {
    int x;
    cout<<"Hola \n";
    x=ardilla();
    cout<<x<<"\n";
    esta_funcion_no_devuelve();

    int n=5,resultado;

    resultado=cuadrado(n);
    cout<<resultado;
    cout<<"\n";
    
    return 0;
}