/*
Convertir de Mayusculas a Minusculas
*/
#include <iostream>
#include <string>
#include <cctype>

std::string convertirAMayusculas(const std::string& cadena) {
    std::string resultado = cadena;
    for (char& c : resultado) {
        c = std::toupper(c);
    }
    return resultado;
}

std::string convertirAMinusculas(const std::string& cadena) {
    std::string resultado = cadena;
    for (char& c : resultado) {
        c = std::tolower(c);
    }
    return resultado;
}

int main() {
    std::string cadena;

    std::cout << "Ingrese una cadena o un texto: ";
    std::getline(std::cin, cadena);

    std::cout << "Seleccione una opción:\n";
    std::cout << "1. Convertir a mayúsculas\n";
    std::cout << "2. Convertir a minúsculas\n";

    int opcion;
    std::cin >> opcion;

    std::string resultado;

    switch (opcion) {
        case 1:
            resultado = convertirAMayusculas(cadena);
            break;
        case 2:
            resultado = convertirAMinusculas(cadena);
            break;
        default:
            std::cout << "Opción inválida. Saliendo del programa.\n";
            return 0;
    }

    std::cout << "El resultado es: " << resultado << std::endl;

    return 0;
}
