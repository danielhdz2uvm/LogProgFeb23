#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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

void modificarArchivo() {
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo a modificar: ";
    cin >> nombreArchivo;

    ofstream archivo(nombreArchivo, ios::app);
    if (archivo.is_open()) {
        string contenido;
        cout << "Ingrese el contenido a agregar al archivo (escriba 'fin' para terminar):" << endl;
        while (true) {
            cin.ignore();
            getline(cin, contenido);
            if (contenido == "fin") {
                break;
            }
            archivo << contenido << endl;
        }
        archivo.close();
        cout << "Archivo modificado exitosamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}

void actualizarArchivo() {
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo a actualizar: ";
    cin >> nombreArchivo;

    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        string contenido;
        cout << "Contenido actual del archivo:" << endl;
        while (getline(archivo, contenido)) {
            cout << contenido << endl;
        }
        archivo.close();
        cout << "Archivo actualizado exitosamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}

int main() {
    while (true) {
        int opcion;
        cout << "Seleccione una opción:" << endl;
        cout << "1. Crear archivo" << endl;
        cout << "2. Modificar archivo" << endl;
        cout << "3. Actualizar archivo" << endl;
        cout << "4. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crearArchivo();
                break;
            case 2:
                modificarArchivo();
                break;
            case 3:
                actualizarArchivo();
                break;
            case 4:
                return 0;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}
