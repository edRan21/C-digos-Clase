#include <iostream> // Libraria estandar de C++ que permite interactuar con la terminal del computador
#include <cctype>   // Libraria que brinda las funciones para modificar el las caracteristicas de las cadenas
#include <string>   // Libreria que brinda la función de declar variables de tipo cadena (el tamaño de 'string' es mayor al de 'char')
using namespace std;

int main (){
    string frase = "hola buenos dias";              // Nuestra frase será almacenada en la variable de tipo 'string' llamada "frase"
    cout << "Frase original: " << frase << "\n";    // Muestra a la pantalla el contendio de "frase"
    cout << "Frase modificada: ";                   // indica cual es la frase modificada 

    int contadorLetras = 0;                         // Inicializamos y declaramos una variable de tipo entero que servirá para llevar la cuenta de las letras que indentifica 
    for (int i = 0; i < frase.size(); i++){         // Recorreos cada caracter de la frase gracias a la función de C++ 'size()', sus posiciónes son enteros
        if (frase[i] != 32){                        // En cada poisción repetirá la instrucción 1: evalua SÍ el contenido de la frase es DIFERENTE de 32 (VALOR ASCII del espacio)
            contadorLetras++;                       // SI EFECTIVAMENTE el contenido de la posición 0 ... hasta n es DIFERENTE, o sea NO ES UN ESPACIO, entonces a la variable se le suma 1
            // Esto cada vez que sea verdadero.

            // SÍ es verdadero también evaluará SI la variable que va AUMENTANDO cuando el caracter no fue un espacio cada vez que se iteré, ES MODULO DE 2, 
            // O SEA SI tiene residuo.
            if (contadorLetras % 2){
                frase[i] = (char)toupper(frase[i]);  // SI tiene residuo entonces el caracter donde se encuentre el iterador (la posición de la frase) se convertira en MAYÚSCULA 
            }
            else{
                frase[i] = (char)tolower(frase[i]);  // SI la posición no tiene residuo. o sea es impar, ENTONCES el caracter de esa posición se convertirá EN MINÚSCULA 
            }
        }
    }
    cout << frase;
    return 0;
}