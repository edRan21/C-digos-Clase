/**
 * Función que reciba 3 números y devuelba el mayor 
 * Otra que reciba dos números y devuelve el resultado de dividir el primero con el segundo, validando que el divisor no sea 0

 */
#include <iostream>
#include <conio.h>
using namespace std;

float obtenerNumero () {
    cout << "Ingrese un numero (uno por uno): ";
    float x;

    cin >> x;

    return x;
}

int mayorDeTres (int primerNumero, int segundoNumero, int tercerNumero) {
    int mayor;
    if (primerNumero > segundoNumero > tercerNumero){
        mayor = primerNumero;
    }
    else if (segundoNumero > tercerNumero){
        mayor = segundoNumero;
    }
    else if (tercerNumero > primerNumero){
        mayor = tercerNumero;
    }
    return mayor;
}


float division (float dividendo, float divisor) {
    float res;
    if (divisor == 0){
        cout << "Es una indeterminacion ya que el " << divisor << " NO se puede dividir.";
        return 1;
    }
    else {
        res = dividendo / divisor;
    }
    return res;
}

int main() {
    int prim = obtenerNumero();
    int sec = obtenerNumero();
    int ter = obtenerNumero();

    int mayor = mayorDeTres(prim, sec, ter);

    cout << "Los valores a comparar son: " << prim << " " << sec << " " << ter << ". Siendo el mayor: " << mayor <<  "\n";


    float divend = obtenerNumero();
    float div = obtenerNumero();

    float res = division(divend, div);
    
    cout << "El resultado de la division es: " << res;

    return 0;
}