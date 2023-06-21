/*
 ejemplo de un programa en C++ que simula una barra de progreso de carga con color azul y un menú con opciones de bienvenida y salida. El programa utiliza un ciclo while para que no termine hasta que el usuario elija la opción de salida. Ten en cuenta que este ejemplo funciona en sistemas GNU/Linux y utiliza la biblioteca <iostream> para las operaciones de entrada y salida, y la biblioteca <unistd.h> para la función usleep() que se utiliza para simular la barra de progreso.
*/
#include <iostream>
#include <unistd.h>

// Función para mostrar la barra de progreso
void mostrarBarraProgreso(int progreso) {
    const int anchoBarra = 50;
    int cantidadLleno = (progreso * anchoBarra) / 100;

    std::cout << "[";
    for (int i = 0; i < anchoBarra; ++i) {
        if (i < cantidadLleno)
            std::cout << "\033[34m#\033[0m";  // Color azul para el progreso
        else
            std::cout << "-";
    }
    std::cout << "] " << progreso << "%\r";
    std::cout.flush();
}

int main() {
    using namespace std;

    int opcion;
    int progreso = 0;

    cout << "Bienvenido al programa de simulación de carga" << endl;

    while (true) {
        cout << "\nMenú de opciones:" << endl;
        cout << "1. Iniciar carga" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            progreso = 0;
            cout << "\nIniciando carga..." << endl;

            while (progreso < 100) {
                usleep(100000);  // Retraso de 100 ms
                progreso += 10;
                mostrarBarraProgreso(progreso);
            }

            cout << "\nCarga completada." << endl;
        } else if (opcion == 2) {
            cout << "\nSaliendo del programa..." << endl;
            break;
        } else {
            cout << "\nOpción inválida. Intente nuevamente." << endl;
        }
    }

    return 0;
}
