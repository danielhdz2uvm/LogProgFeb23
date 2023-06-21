#include <iostream>

using namespace std;

int main() {
    int n, i;
    float cantidad, precio, total = 0;

    cout << "Ingrese el número de artículos: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "Artículo " << i << endl;
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        cout << "Ingrese el precio: ";
        cin >> precio;

        total += cantidad * precio;
    }

    cout << "El total a pagar es: " << total << endl;

    return 0;
}