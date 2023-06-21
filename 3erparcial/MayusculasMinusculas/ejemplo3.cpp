#include <iostream>
#include <string> // Librería para uso de cadena de caracteres
#include <cctype> // Para utilizar las funciones de conversión de mayúsculas y minúsculas

using namespace std;    

// Función para convertir una cadena a mayúsculas
string convertirMayusculas(string cadena) {
    for (char& c : cadena) {
        c = toupper(c); // Convierte el caracter a mayúscula
    }
    return cadena;
}

// Función para convertir una cadena a minúsculas
string convertirMinusculas(string cadena) {
    for (char& c : cadena) {
        c = tolower(c); // Convierte el caracter a minúscula
    }
    return cadena;
}

// Función para capitalizar la primera letra de una cadena
string capitalizarPrimeraLetra(string cadena) {
    if (!cadena.empty()) {
        cadena[0] = toupper(cadena[0]); // Convierte el primer caracter a mayúscula
    }
    return cadena;
}

int main() {
    string cadena;
    int opcion;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Seleccione una opción:\n";
    cout << "1. Convertir a mayúsculas\n";
    cout << "2. Convertir a minúsculas\n";
    cout << "3. Capitalizar primera letra\n";
    cout << "Opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Cadena en mayúsculas: " << convertirMayusculas(cadena) << endl;
            break;
        case 2:
            cout << "Cadena en minúsculas: " << convertirMinusculas(cadena) << endl;
            break;
        case 3:
            cout << "Cadena con la primera letra capitalizada: " << capitalizarPrimeraLetra(cadena) << endl;
            break;
        default:
            cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
    }
    
    return 0;
}