/*
programa en C++ que muestra mensajes con diferentes colores 
en sistemas operativos GNU/Linux utilizando la biblioteca 
<iostream> y <unistd.h>. El programa utiliza un ciclo while 
para que no termine y sigue mostrando mensajes hasta que se 
interrumpa manualmente ( Control + C)
*/
#include <iostream>
#include <unistd.h>

using namespace std;

// Colores ANSI para la salida en la terminal
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

int main() {
    while (true) {
        cout << RED << "\n Mensaje en rojo " << RESET << endl;
        usleep(500000); // Espera de 500 ms

        cout << GREEN << "Mensaje en verde" << RESET << endl;
        usleep(500000);

        cout << YELLOW << "Mensaje en amarillo" << RESET << endl;
        usleep(500000);

        cout << BLUE << "Mensaje en azul" << RESET << endl;
        usleep(500000);

        cout << MAGENTA << "Mensaje en magenta" << RESET << endl;
        usleep(500000);

        cout << CYAN << "Mensaje en cian" << RESET << endl;
        usleep(500000);
        cout <<"\n" << endl;
        cout << "\n Teclea Ctrl + C, para salir del programa \n" << endl;
    }
    
    return 0;
}
