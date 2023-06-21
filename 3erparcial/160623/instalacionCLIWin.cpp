/*
Ejemplo de un programa tipo CLI en C++ que simula la instalación 
de un programa con una barra de progreso de color verde. 
También incluye un ciclo while para que no termine el programa 
hasta que el usuario lo desee
*/
#include <iostream>
#include <thread>

using namespace std;

void mostrarBarraProgreso(int progreso) {
    cout << "\r[";
    int completado = progreso / 10;
    for (int i = 0; i < completado; ++i) {
        cout << "\033[42m \033[0m";
    }
    for (int i = completado; i < 10; ++i) {
        cout << " ";
    }
    cout << "] " << progreso << "%";
    cout.flush();
}

int main() {
    int progreso = 0;
    bool instalacionCompleta = false;

    while (!instalacionCompleta) {
        mostrarBarraProgreso(progreso);
        this_thread::sleep_for(chrono::milliseconds(100));

        progreso += 1;
        if (progreso == 100) {
            instalacionCompleta = true;
            cout << endl << "¡Instalación completada!" << endl;
        }
    }

    return 0;
}
