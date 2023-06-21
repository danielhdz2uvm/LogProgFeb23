/*
crear un programa en c, utilizando funciones para crear, 
guardar y modificar un archivo, con un menu creado en 
switch, utiliza using namespace std; y un ciclo while 
para que no termine el programa
*/
#include <stdio.h>
#include <stdlib.h>

void crearArchivo() {
    FILE *archivo;
    char nombreArchivo[100];

    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombreArchivo);

    archivo = fopen(nombreArchivo, "w");

    if (archivo == NULL) {
        printf("No se pudo crear el archivo.\n");
    } else {
        printf("Archivo creado exitosamente.\n");
        fclose(archivo);
    }
}

void guardarArchivo() {
    FILE *archivo;
    char nombreArchivo[100];
    char contenido[1000];

    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombreArchivo);

    archivo = fopen(nombreArchivo, "a");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
    } else {
        printf("Ingrese el contenido a guardar (max. 1000 caracteres):\n");
        scanf(" %[^\n]", contenido);
        fprintf(archivo, "%s\n", contenido);
        printf("Contenido guardado exitosamente.\n");
        fclose(archivo);
    }
}

void modificarArchivo() {
    FILE *archivo;
    char nombreArchivo[100];
    char contenido[1000];

    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombreArchivo);

    archivo = fopen(nombreArchivo, "w");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
    } else {
        printf("Ingrese el nuevo contenido (max. 1000 caracteres):\n");
        scanf(" %[^\n]", contenido);
        fprintf(archivo, "%s\n", contenido);
        printf("Contenido modificado exitosamente.\n");
        fclose(archivo);
    }
}

int main() {
    int opcion;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Crear archivo\n");
        printf("2. Guardar contenido en archivo\n");
        printf("3. Modificar contenido de archivo\n");
        printf("4. Salir\n");

        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                crearArchivo();
                break;
            case 2:
                guardarArchivo();
                break;
            case 3:
                modificarArchivo();
                break;
            case 4:
                exit(0);
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
        }
    }

    return 0;
}