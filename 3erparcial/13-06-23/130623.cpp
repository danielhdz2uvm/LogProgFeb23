/*
El programa permite crear, guardar y modificar un archivo a través 
de un menú implementado con la declaración switch. El ciclo while 
se utiliza para mantener el programa en ejecución hasta que el 
usuario decida salir
*/
#include <iostream>
#include <fstream>
using namespace std;

// Función para crear un archivo
void crearArchivo() {
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreArchivo;

    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        cout << "Archivo creado exitosamente." << endl;
        archivo.close();
    } else {
        cout << "No se pudo crear el archivo." << endl;
    }
}

// Función para guardar en un archivo
void guardarArchivo() {
    string nombreArchivo;
    string contenido;

    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreArchivo;

    cout << "Ingrese el contenido del archivo: ";
    cin.ignore(); // Ignorar el salto de línea anterior
    getline(cin, contenido);

    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        archivo << contenido;
        cout << "Archivo guardado exitosamente." << endl;
        archivo.close();
    } else {
        cout << "No se pudo guardar el archivo." << endl;
    }
}

// Función para modificar un archivo existente
void modificarArchivo() {
    string nombreArchivo;
    string contenido;

    cout << "Ingrese el nombre del archivo a modificar: ";
    cin >> nombreArchivo;

    cout << "Ingrese el contenido a agregar: ";
    cin.ignore(); // Ignorar el salto de línea anterior
    getline(cin, contenido);

    ofstream archivo(nombreArchivo, ios::app);
    if (archivo.is_open()) {
        archivo << contenido;
        cout << "Archivo modificado exitosamente." << endl;
        archivo.close();
    } else {
        cout << "No se pudo modificar el archivo." << endl;
    }
}

int main() {
    int opcion;
    bool salir = false;

    while (!salir) {
        cout << "----- MENU -----" << endl;
        cout << "1. Crear un archivo" << endl;
        cout << "2. Guardar en un archivo" << endl;
        cout << "3. Modificar un archivo" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

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
                salir = true;
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}