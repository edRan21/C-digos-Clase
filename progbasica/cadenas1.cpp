#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main (){
    string frase = "hola buenos dias";
    cout << "Frase original: " << frase << "\n";
    cout << "Frase modificada: \n";

    int indx;  // indice para recorrer el arreglo y desplazar el indice un espacio más
    string f_mod;
    int mod;
    for (int i = 0; i <= frase.size(); i++){
        indx = i + 1;
        mod = i % 2;
        if (mod == 0){
            cout << frase[i];
        }
    }
    return 0;
}