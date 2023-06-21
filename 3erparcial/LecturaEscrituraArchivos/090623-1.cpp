#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    FILE* archivo;
    char nombreArchivo[100];
    char texto[100];
    char respuesta;

    while (true) {
        cout << "Ingrese el nombre del archivo: ";
        scanf("%s", nombreArchivo);

        archivo = fopen(nombreArchivo, "a+");

        if (archivo == NULL) {
            cout << "No se pudo abrir el archivo." << endl;
            return 1;
        }

        cout << "Ingrese el texto a guardar en el archivo: ";
        scanf(" %[^\n]s", texto);

        fprintf(archivo, "%s\n", texto);
        fclose(archivo);

        cout << "Texto guardado en el archivo exitosamente." << endl;

        cout << "¿Desea agregar más texto? (s/n): ";
        scanf(" %c", &respuesta);

        if (respuesta != 's' && respuesta != 'S') {
            break;
        }
    }

    return 0;
}
