#include <iostream>
#include <cstdio>

using namespace std;

void crearArchivo()
{
    FILE *archivo;
    archivo = fopen("datos.txt", "w");

    if (archivo == NULL)
    {
        cout << "Error al crear el archivo." << endl;
        return;
    }

    char texto[100];
    cout << "Ingrese el texto a guardar en el archivo (ingrese 'salir' para terminar):" << endl;

    while (true)
    {
        scanf("%s", texto);

        if (strcmp(texto, "salir") == 0)
            break;

        fprintf(archivo, "%s\n", texto);
    }

    fclose(archivo);
    cout << "Archivo creado exitosamente." << endl;
}

void modificarArchivo()
{
    FILE *archivo;
    archivo = fopen("datos.txt", "a");

    if (archivo == NULL)
    {
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    char texto[100];
    cout << "Ingrese el texto a agregar al archivo (ingrese 'salir' para terminar):" << endl;

    while (true)
    {
        scanf("%s", texto);

        if (strcmp(texto, "salir") == 0)
            break;

        fprintf(archivo, "%s\n", texto);
    }

    fclose(archivo);
    cout << "Archivo modificado exitosamente." << endl;
}

int main()
{
    int opcion;

    while (true)
    {
        cout << "Seleccione una opción:" << endl;
        cout << "1. Crear archivo." << endl;
        cout << "2. Modificar archivo." << endl;
        cout << "3. Salir." << endl;
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                crearArchivo();
                break;
            case 2:
                modificarArchivo();
                break;
            case 3:
                cout << "Saliendo del programa." << endl;
                return 0;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    }

    return 0;
}
