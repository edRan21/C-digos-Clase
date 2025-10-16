#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "                                   -------CALCULADORA-------- \n";
    cout << "ELIGE UNA OPCION:";
    int operacion;

    // numeros
    int a, b;
    float c,d;

    cout << " Escribe '1' para escoger SUMAR, '2' RESTAR, '3' MULTIPLICAR Y '4' DIVIDIR, O '5' PARA SALIR DEL PROGRAMA. \n";
    cin >> operacion;
    switch (operacion)
    {
    case 1:
        cout << "Seleccionaste suma!, ingrese un numero: \n";
        cin >> a;
        cout << "ingrese un segundo numero: \n";
        cin >> b;
        cout << "la suma es: " <<  a + b;
        break;
    case 2:
        cout << "Seleccionaste resta!, ingrese un numero: \n";
        cin >> a;
        cout << "ingrese un segundo numero: \n";
        cin >> b;
        cout << "la resta es: " <<  a - b;
        break;
    case 3:
        cout << "Seleccionaste multiplicacion!, ingrese un numero: \n";
        cin >> a;
        cout << "ingrese un segundo numero: \n";
        cin >> b;
        cout << "la multiplicacion es: " <<  a * b;
        break;

    case 4:
        cout << "Seleccionaste division!, ingrese un numero a dividir: \n";
        cin >> a;
        cout << "ingrese un segundo numero con el cual dividirlo: \n";
        cin >> b;
        cout << "la divison es: " <<  c / d;
        break;
    
    case 5:
        cout << "SALISTE DEL PROGRAMA";
        break;
    
    default:
        cout << "Calculo invalido, adios";
        break;
    }
    return 0;
}