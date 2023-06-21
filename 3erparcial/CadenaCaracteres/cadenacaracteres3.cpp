 #include <iostream>
using namespace std;
int main(void)
{
    char cadena[30];
   
    cin.getline(cadena,30); //lectura de la cadena por teclado
                      //se asignarán 29 caracteres como máximo
                      //el carácter nulo se añade de forma automática
   
    //recorrido de la cadena de caracteres
    int i=0; //variable índice para recorrer la cadena
    while(cadena[i]!='\0') //mientras no lleguemos al nulo
    {
         cout << cadena[i]; //se muestra el carácter
         i++;              //se incrementa el índice
    }
    cout << endl;
    system("pause");
}   