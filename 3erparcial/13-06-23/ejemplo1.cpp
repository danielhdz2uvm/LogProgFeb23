/*
El programa permite crear, guardar y modificar un archivo
 a través de un menú implementado con el ciclo while. 
 El ciclo while se utiliza para mantener el programa en 
 ejecución hasta que el usuario decida salir, utilizar 
 using namespace std; Pero antes de iniciar el programa 
 pedir un password
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool validarPassword() {
    string password;
    cout << "Por favor, ingrese la contraseña: ";
    cin >> password;

    // Verificar si la contraseña es correcta
    if (password == "alumnos") {
        return true;
    } else {
        cout << "Contraseña incorrecta. El programa se cerrará." << endl;
        return false;
    }
}

void crearArchivo() {
    string nombreArchivo, contenido;
    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreArchivo;
    cout << "Ingrese el contenido del archivo: ";
    cin >> contenido;

    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        archivo << contenido;
        archivo.close();
        cout << "Archivo creado exitosamente." << endl;
    } else {
        cout << "No se pudo crear el archivo." << endl;
    }
}

void modificarArchivo() {
    string nombreArchivo, contenido;
    cout << "Ingrese el nombre del archivo a modificar: ";
    cin >> nombreArchivo;

    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();

        cout << "Ingrese el nuevo contenido del archivo: ";
        cin >> contenido;

        ofstream archivoModificado(nombreArchivo);
        if (archivoModificado.is_open()) {
            archivoModificado << contenido;
            archivoModificado.close();
            cout << "Archivo modificado exitosamente." << endl;
        } else {
            cout << "No se pudo modificar el archivo." << endl;
        }
    } else {
        cout << "No se encontró el archivo." << endl;
    }
}

int main() {
    if (validarPassword()) {
        int opcion = 0;
        while (opcion != 4) {
            cout << "----- MENÚ -----" << endl;
            cout << "1. Crear archivo" << endl;
            cout << "2. Modificar archivo" << endl;
            cout << "3. Salir" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    crearArchivo();
                    break;
                case 2:
                    modificarArchivo();
                    break;
                case 3:
                    cout << "Saliendo del programa." << endl;
                    break;
                default:
                    cout << "Opción inválida." << endl;
            }
        }
    }

    return 0;
}