/*
Programa en C++ que te permitirá crear, 
modificar y buscar productos de una tienda
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definición de la estructura Producto
struct Producto {
    string nombre;
    float precio;
    int stock;
};

// Función para crear un nuevo producto
Producto crearProducto() {
    Producto nuevoProducto;
    cout << "Ingrese el nombre del producto: ";
    cin.ignore();
    getline(cin, nuevoProducto.nombre);
    cout << "Ingrese el precio del producto: ";
    cin >> nuevoProducto.precio;
    cout << "Ingrese la cantidad en stock del producto: ";
    cin >> nuevoProducto.stock;
    return nuevoProducto;
}

// Función para mostrar los detalles de un producto
void mostrarProducto(const Producto& producto) {
    cout << "Nombre: " << producto.nombre << endl;
    cout << "Precio: " << producto.precio << endl;
    cout << "Stock: " << producto.stock << endl;
}

// Función para buscar un producto por nombre
void buscarProducto(const vector<Producto>& inventario, const string& nombre) {
    bool encontrado = false;
    for (const auto& producto : inventario) {
        if (producto.nombre == nombre) {
            mostrarProducto(producto);
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Producto no encontrado." << endl;
    }
}

// Función principal del programa
int main() {
    vector<Producto> inventario; // Vector para almacenar los productos

    int opcion;
    while (true) {
        // Mostrar el menú
        cout << "------ MENU ------" << endl;
        cout << "1. Agregar un nuevo producto" << endl;
        cout << "2. Buscar un producto" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        if (opcion == 1) {
            Producto nuevoProducto = crearProducto();
            inventario.push_back(nuevoProducto);
            cout << "Producto agregado correctamente." << endl;
        } else if (opcion == 2) {
            cout << "Ingrese el nombre del producto a buscar: ";
            cin.ignore();
            string nombre;
            getline(cin, nombre);
            buscarProducto(inventario, nombre);
        } else if (opcion == 3) {
            cout << "Saliendo del programa..." << endl;
            break;
        } else {
            cout << "Opción inválida. Intente nuevamente." << endl;
        }

        cout << endl;
    }

    return 0;
}