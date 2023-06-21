/*
Convertir mayusculas o minusculas
*/
#include <iostream>
#include <string> // Librería para cadena de caracteres o string
#include <cctype> // Librería para funciones de conversión de mayúsculas y minúsculas

using namespace std;

int main() {
    string cadena;
    char opcion;
    // Se pide ingresar un texto y se guarda en una variable
    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);
    // Es el menu del programa
    cout << "Seleccione la opción deseada:\n";
    cout << "  1. Convertir a mayúsculas\n";
    cout << "  2. Convertir a minúsculas\n";
    cout << "Opción: ";
    cin >> opcion;
    // con un if se realiza el convertir a mayusculas o minusculas
    if (opcion == '1') {
        // Convertir a mayúsculas
        for (char& c : cadena) {
            c = toupper(c);
        }
    } else if (opcion == '2') {
        // Convertir a minúsculas
        for (char& c : cadena) {
            c = tolower(c);
        }
        // Cuando no es ni 1 o 2
    } else {
        cout << "Opción inválida. Saliendo del programa.\n";
        return 0;
    }

    cout << "Resultado: " << cadena << endl;

    return 0;
}