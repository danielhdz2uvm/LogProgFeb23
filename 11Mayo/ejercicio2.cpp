/*
Realiza un programa que llene un arreglo unidimensional (vector) de tamaño n de calificaciones y calcule el promedio, usar funciones.
Las funciones que debe de implementar son las siguientes:
a. Función para llenar el arreglo
b. Función para calcular el promedio
c. La función main, en donde se deben de llamar a las demás funciones de la forma correcta.
*/

#include <iostream>
using namespace std;

const int MAX = 100; // tamaño máximo del arreglo

// función para llenar el arreglo con las calificaciones
void llenarArreglo(float arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Ingresa la calificación " << i+1 << ": ";
        cin >> arr[i];
    }
}

// función para calcular el promedio del arreglo
float calcularPromedio(float arr[], int n) {
    float suma = 0;
    for(int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma/n;
}

// función principal (main)
int main() {
    float calificaciones[MAX];
    int n;

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> n;

    llenarArreglo(calificaciones, n);
    float promedio = calcularPromedio(calificaciones, n);

    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}