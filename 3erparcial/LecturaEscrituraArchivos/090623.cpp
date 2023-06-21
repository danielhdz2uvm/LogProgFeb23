#include <iostream>
#include <cstdio>

using namespace std;

void crearArchivo()
{
    FILE *archivo = fopen("datos.txt", "w");

    if (archivo == NULL)
    {
        cout << "No se pudo crear el archivo." << endl;
        return;
    }

    cout << "Ingrese el texto a guardar en el archivo (escriba 'salir' para finalizar):" << endl;

    char texto[100];
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
    FILE *archivo = fopen("datos.txt", "a");

    if (archivo == NULL)
    {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    cout << "Ingrese el texto a agregar al archivo (escriba 'salir' para finalizar):" << endl;

    char texto[100];
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
        cout << "1. Crear archivo" << endl;
        cout << "2. Modificar archivo" << endl;
        cout << "3. Salir" << endl;

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
            return 0;
        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
        }
    }

    return 0;
}
