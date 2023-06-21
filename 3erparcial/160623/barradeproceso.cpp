/*
programa en C++ que simula una barra de proceso de carga 
con color azul y un menú con opciones de bienvenida y salida. 
Utiliza un ciclo while para que el programa no termine hasta 
que el usuario elija la opción de salida
*/
#include <iostream>
#include <windows.h> // Para cambiar el color de la consola

using namespace std;

void mostrarBarraProceso()
{
    int porcentaje = 0;
    while (porcentaje <= 100) {
        cout << "[";
        for (int i = 0; i < 50; i++) {
            if (i < porcentaje / 2) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // Establecer color azul
                cout << "=";
            } else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // Restablecer color blanco
                cout << " ";
            }
        }
        cout << "] " << porcentaje << "%\r";
        cout.flush();
        porcentaje++;
        Sleep(100); // Tiempo de espera para simular la carga
    }
    cout << endl;
}

int main()
{
    int opcion;

    while (true) {
        cout << "=== Menú ===" << endl;
        cout << "1. Bienvenida" << endl;
        cout << "2. Salida" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "¡Bienvenido!" << endl;
                mostrarBarraProceso();
                break;
            case 2:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
        }

        cout << endl;
    }

    return 0;
}