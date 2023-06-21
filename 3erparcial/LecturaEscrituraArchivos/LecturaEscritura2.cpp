/*
Este programa permite al usuario crear un archivo, 
ingresar contenido en él, leer el contenido del archivo 
y luego modificarlo. Puedes compilar y ejecutar el 
programa en tu entorno de desarrollo de C++ preferido. 
Recuerda que debes incluir la biblioteca fstream y usar 
los objetos ofstream y ifstream para escribir y leer archivos, 
respectivamente. Además, utiliza open() para abrir archivos 
en diferentes modos (ios::app para agregar contenido al final 
del archivo en este ejemplo).
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream archivo;  // Para escribir en el archivo
    ifstream archivo_lectura;  // Para leer el archivo
    string nombreArchivo, contenido;

    cout << "Ingrese el nombre del archivo: ";
    cin >> nombreArchivo;

    // Crear un archivo
    archivo.open(nombreArchivo.c_str());
    if (archivo.is_open()) {
        cout << "El archivo ha sido creado exitosamente." << endl;
        archivo.close();
    } else {
        cout << "No se pudo crear el archivo." << endl;
        return 0;
    }

    // Abrir un archivo para escritura
    archivo.open(nombreArchivo.c_str(), ios::app);  // ios::app para añadir contenido al final del archivo
    if (archivo.is_open()) {
        cout << "Ingrese el contenido del archivo (escriba 'fin' para terminar):" << endl;
        while (getline(cin, contenido) && contenido != "fin") {
            archivo << contenido << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
        return 0;
    }

    // Abrir un archivo para lectura
    archivo_lectura.open(nombreArchivo.c_str());
    if (archivo_lectura.is_open()) {
        string linea;
        cout << "Contenido del archivo:" << endl;
        while (getline(archivo_lectura, linea)) {
            cout << linea << endl;
        }
        archivo_lectura.close();
    } else {
        cout << "No se pudo abrir el archivo para lectura." << endl;
        return 0;
    }

    // Modificar un archivo existente
    string nuevoContenido;
    cout << "Ingrese el nuevo contenido para el archivo (escriba 'fin' para terminar):" << endl;
    while (getline(cin, nuevoContenido) && nuevoContenido != "fin") {
        contenido += "\n" + nuevoContenido;
    }

    archivo.open(nombreArchivo.c_str());
    if (archivo.is_open()) {
        archivo << contenido;
        archivo.close();
        cout << "El archivo ha sido modificado exitosamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo para modificarlo." << endl;
        return 0;
    }

    return 0;
}