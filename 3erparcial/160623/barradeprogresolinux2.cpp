#include <iostream>
#include <unistd.h>

using namespace std;

void showProgressBar(int seconds) {
    int progressBarWidth = 40;

    cout << "Cargando: [";
    for (int i = 0; i < progressBarWidth; ++i) {
        cout << "\033[44m \033[0m";
        cout.flush();
        usleep(seconds * 1000000 / progressBarWidth);
    }
    cout << "]\n";
}

int main() {
    int opcion;
    
    while (true) {
        cout << "=== Bienvenido ===" << endl;
        cout << "1. Cargar" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                showProgressBar(1);
                break;
            case 2:
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Opción inválida. Por favor, ingrese nuevamente." << endl;
                break;
        }
        
        cout << endl;
    }

    return 0;
}