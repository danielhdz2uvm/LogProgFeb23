/*
Realiza un programa que calcule la suma de matrices (arreglos bidimensionales), de dimensión mxn, use funciones.

Las funciones que debe de implementar son las siguientes:

    a. Función para llenar las matrices a sumar
    b. Función que calcule la suma de matrices
    c. Función que muestre el resultado de la suma de matrices.
    d. Función main que llama de la forma de la forma correcta a las demás funciones.
*/
#include <iostream>
using namespace std;

// Función para llenar una matriz con valores ingresados por el usuario
void llenarMatriz(int matriz[][100], int filas, int columnas) {
    cout << "Ingrese los valores de la matriz:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para sumar dos matrices y almacenar el resultado en una tercera matriz
void sumarMatrices(int matrizA[][100], int matrizB[][100], int matrizC[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

// Función para mostrar una matriz
void mostrarMatriz(int matriz[][100], int filas, int columnas) {
    cout << "Matriz resultante:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;
    int matrizA[100][100], matrizB[100][100], matrizC[100][100];

    // Pedir al usuario las dimensiones de las matrices
    cout << "Ingrese el numero de filas de las matrices: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de las matrices: ";
    cin >> columnas;

    // Llenar las matrices A y B
    cout << "\nMatriz A:\n";
    llenarMatriz(matrizA, filas, columnas);

    cout << "\nMatriz B:\n";
    llenarMatriz(matrizB, filas, columnas);

    // Sumar las matrices A y B y almacenar el resultado en la matriz C
    sumarMatrices(matrizA, matrizB, matrizC, filas, columnas);

    // Mostrar la matriz resultante
    mostrarMatriz(matrizC, filas, columnas);

    return 0;
}