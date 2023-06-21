#include <iostream>
#include <cstdio>

int main() {
    // Abrir el archivo para leer
    FILE* archivoEntrada = fopen("entrada.txt", "r");
    if (archivoEntrada == nullptr) {
        std::cout << "Error al abrir el archivo de entrada." << std::endl;
        return 1;
    }

    // Leer datos del archivo
    int numero;
    fscanf(archivoEntrada, "%d", &numero);
    std::cout << "El número leído del archivo es: " << numero << std::endl;

    // Cerrar el archivo de entrada
    fclose(archivoEntrada);

    // Abrir el archivo para escribir
    FILE* archivoSalida = fopen("salida.txt", "w");
    if (archivoSalida == nullptr) {
        std::cout << "Error al abrir el archivo de salida." << std::endl;
        return 1;
    }

    // Escribir datos en el archivo
    fprintf(archivoSalida, "El número leído del archivo es: %d\n", numero);

    // Cerrar el archivo de salida
    fclose(archivoSalida);

    return 0;
}
