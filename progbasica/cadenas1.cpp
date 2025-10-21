#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main (){
    string frase = "hola buenos dias";
    cout << "Frase original: " << frase << "\n";
    cout << "Frase modificada: ";

    int contadorLetras = 0;
    for (int i = 0; i < frase.size(); i++){
        if (frase[i] != 32){
            contadorLetras++;

            if (contadorLetras % 2){
                frase[i] = (char)toupper(frase[i]);
            }
            else{
                frase[i] = (char)tolower(frase[i]);
            }
        }
    }
    cout << frase;
    return 0;
}