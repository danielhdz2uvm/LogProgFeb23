/*
ejemplo en C++ sobre manipulación de cadenas de caracteres
*/
#include <iostream>
#include <string>

int main() {
    std::string frase = "Hola, este es un ejemplo de cadena de caracteres.";
    
    // Obtener la longitud de la cadena
    int longitud = frase.length();
    std::cout << "Longitud de la cadena: " << longitud << std::endl;
    
    // Acceder a un carácter específico
    char primerCaracter = frase[0];
    std::cout << "Primer carácter: " << primerCaracter << std::endl;
    
    // Modificar un carácter específico
    frase[0] = 'h';
    std::cout << "Cadena modificada: " << frase << std::endl;
    
    // Concatenar cadenas
    std::string segundaParte = "¡Espero que te sea útil!";
    std::string fraseCompleta = frase + " " + segundaParte;
    std::cout << "Frase completa: " << fraseCompleta << std::endl;
    
    // Buscar una subcadena
    std::string subcadena = "ejemplo";
    size_t posicion = frase.find(subcadena);
    if (posicion != std::string::npos) {
        std::cout << "La subcadena \"" << subcadena << "\" se encuentra en la posición: " << posicion << std::endl;
    } else {
        std::cout << "La subcadena \"" << subcadena << "\" no se encontró en la cadena." << std::endl;
    }
    
    return 0;
}
