/*
Realizar un programa que permita guardar en un tipo struct los datos concernientes a un estudiante, los datos de interés son:

    • Matricula
    • Nombre
    • Carrera 
    • Promedio 
    • Dirección

Se debe de realizar las siguientes funciones:
    a. Captura de los datos
    b. Mostrar los datos
    c. La función main que llame de la forma correcta a las funciones captura y mostrar.
*/
#include <iostream>
#include <string>

struct Estudiante {
  int matricula;
  std::string nombre;
  std::string carrera;
  float promedio;
  std::string direccion;
};
Estudiante capturarDatos() {
  Estudiante estudiante;
  
  std::cout << "Ingrese la matricula: ";
  std::cin >> estudiante.matricula;
  std::cin.ignore();

  std::cout << "Ingrese el nombre: ";
  std::getline(std::cin, estudiante.nombre);

  std::cout << "Ingrese la carrera: ";
  std::getline(std::cin, estudiante.carrera);

  std::cout << "Ingrese el promedio: ";
  std::cin >> estudiante.promedio;
  std::cin.ignore();

  std::cout << "Ingrese la direccion: ";
  std::getline(std::cin, estudiante.direccion);

  return estudiante;
}
void mostrarDatos(const Estudiante& estudiante) {
  std::cout << "Matricula: " << estudiante.matricula << std::endl;
  std::cout << "Nombre: " << estudiante.nombre << std::endl;
  std::cout << "Carrera: " << estudiante.carrera << std::endl;
  std::cout << "Promedio: " << estudiante.promedio << std::endl;
  std::cout << "Direccion: " << estudiante.direccion << std::endl;
}
int main() {
  Estudiante estudiante = capturarDatos();
  mostrarDatos(estudiante);
  
  return 0;
}