/*
Utilizando funciones
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Función para crear un archivo de texto
void crearArchivo(const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        cout << "Se creó el archivo: " << nombreArchivo << endl;
        archivo.close();
    } else {
        cout << "No se pudo crear el archivo." << endl;
    }
}

// Función para escribir en un archivo de texto
void escribirEnArchivo(const string& nombreArchivo, const string& contenido) {
    ofstream archivo(nombreArchivo, ios::app);
    if (archivo.is_open()) {
        archivo << contenido << endl;
        cout << "Se escribió en el archivo: " << nombreArchivo << endl;
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}

// Función para leer el contenido de un archivo de texto
void leerArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        string linea;
        cout << "Contenido del archivo " << nombreArchivo << ":" << endl;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para lectura." << endl;
    }
}

int main() {
    string nombreArchivo = "archivo.txt";

    crearArchivo(nombreArchivo);

    escribirEnArchivo(nombreArchivo, "Hola, mundo!");
    escribirEnArchivo(nombreArchivo, "Este es un ejemplo de archivo de texto.");

    leerArchivo(nombreArchivo);

    return 0;
}
