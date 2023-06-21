/*
ejemplo de programa en C++ que utiliza un ciclo while para mostrar texto en diferentes colores. Utiliza la biblioteca Windows.h para manipular la consola y cambiar los colores de texto.
*/
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Manejador de la consola

    int color = 1; // Variable para almacenar el código de color

    while (true) {
        // Cambiar el color de texto
        SetConsoleTextAttribute(hConsole, color);

        // Imprimir el texto
        cout << "Texto en color " << color << endl;

        // Actualizar el color para el siguiente ciclo
        color++;
        if (color > 15) {
            color = 1;
        }

        // Pausar el programa por un breve momento
        Sleep(500);
    }

    return 0;
}