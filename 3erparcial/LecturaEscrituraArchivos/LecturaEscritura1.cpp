// Guardar contenido en un archivo de texto plano usando C++ 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nombreArchivo = "videojuegos.txt";
    ofstream archivo;
		// Abrimos el archivo
		archivo.open(nombreArchivo.c_str(), fstream::out);
		// Y le escribimos redirigiendo
		archivo << "cuph";
		archivo << "ead";
		archivo << " - Escribir en archivo ";

		// No olvidemos saltos de línea
		archivo << endl;
		archivo << "\n";

		// Podemos escribir más
		archivo << "doom eternal" << endl;
		archivo << "doom 2016" << endl;
		archivo << "resident evil 2" << endl;
    // Finalmente lo cerramos
		archivo.close();
		cout << "Escrito correctamente";
}