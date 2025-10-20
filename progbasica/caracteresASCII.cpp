#include <iostream>
#include <string>
using namespace std;

int main (){
    cout << "Ingresa la cadena de caracteres a mostrar su codigo ASCII: ";
    string frase;
    cin >> frase;

    for (int i = 0; i <= frase.size(); i++){
        char caracter = frase[i];
        cout << caracter;
    }
    return 0;
}