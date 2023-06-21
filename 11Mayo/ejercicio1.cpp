/*
Realiza un programa que determine si un número es par o impar, se deben de implementar las siguientes funciones:
    a. La función que evalúa si un número es par o impar.
    b. La función main que hace el uso correcto de la función definida anteriormente.
*/

#include <iostream>
using namespace std;

bool esPar(int numero) {
    if (numero % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (esPar(numero)) {
        cout << numero << " es par" << endl;
    } else {
        cout << numero << " es impar" << endl;
    }

    return 0;
}