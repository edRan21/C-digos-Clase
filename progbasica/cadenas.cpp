#include <iostream>
#include <string> // libraria que nos permite utilizar cadenas de caracteres = palabras
#include <cctype> // nos permite modificar caracteres; para mayúsculas se utiliza la función 'toupper' / para minusculas 'tolower'
using namespace std;

int main (){
    cout << "Frase original: hola buenos dias\n";
    string frase = "holabuenosdias"; // varible que almacenará la entrada del usuario (proximamente)


    for (int i = 0; i <= frase.size(); i++){ /*Recorre el algoritmo y asigna a cada caracter de este un espacio,
                                                de esta forma la frase se convierte en un arreglo en donde cada letra 
                                                utiliza un indice*/

        int modulo = i % 2; // con ayuda del profesor tratamos a cada posición ubicar las letras mayúsculas, estas utilizan un indice impar
        if (modulo == 0){
            cout << (char)toupper(frase[i]);  // si es impar convierte la letra en mayúsculas
        }
        else {
            cout << (char)tolower(frase[i]);  // si no, en minusculas
        }
    }
    return 0;

}