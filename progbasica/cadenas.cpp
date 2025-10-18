#include <iostream>
#include <string> // libraria que nos permite utilizar cadenas de caracteres = palabras
#include <cctype> // nos permite modificar caracteres; para mayúsculas se utiliza la función 'toupper' / para minusculas 'tolower'
using namespace std;

int main (){
    cout << "Frase original: hola buenos dias\n";
    string frase1 = "hola";  
    string frase2 = "buenos";
    string frase3 = "dias";


    for (int i = 0; i <= frase1.size(); i++){
        int mod = i % 2;
        if (mod == 0){
            cout << (char)toupper(frase1[i]);
        }
        else 
        cout << (char)tolower(frase1[i]);
        
    }
    cout << " ";

    for (int i = 0; i <= frase2.size(); i++){
        int mod = i % 2;
        if (mod == 0){
            cout << (char)toupper(frase2[i]);           // convertimos el contenido de cada indice de la palabra de tipo caracter a MAYÚSCULA
        }
        else {
            cout << (char)tolower(frase2[i]);           // si tiene residuo '1' lo convertimos a minuscula
        }
    }
    cout << " ";

    for (int i = 0; i <= frase3.size(); i++){
        int mod = i % 2;
        if (mod == 0){
            cout << (char)toupper(frase3[i]);
        }
        else {
            cout << (char)tolower(frase3[i]);
        }
    }

    return 0;

}