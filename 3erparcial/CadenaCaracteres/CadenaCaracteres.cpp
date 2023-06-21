/*
Este programa muestra algunas operaciones comunes con cadenas de 
caracteres. Primero, se inicializa una cadena de caracteres llamada 
frase. Luego, se muestra la longitud de la cadena, se accede al 
primer carácter y se modifica. Después, se concatenan dos cadenas 
y se muestra el resultado. Finalmente, se busca una subcadena en 
la cadena original utilizando el método find().

Recuerda incluir la biblioteca <string> para trabajar con cadenas 
de caracteres en C++.
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
    char segundoCaracter = frase[1];
    std::cout << "Primer carácter: " << primerCaracter << std::endl;
    std::cout << "Segundo caracter: "<< segundoCaracter << std::endl;
    
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
