#include <iostream>
using namespace std;
int main(void)
{
    char cadena[10];
    int i;
    for(i=0;i<9;i++) // máximo 9 caracteres
        cin.get(cadena[i]); // se lee por teclado un carácter y
                            // se guarda en el array
    cadena[i]='\0';  // debemos añadir el nulo al final
    cout << "Ha escrito: " << cadena << endl;
    system("pause");
} 