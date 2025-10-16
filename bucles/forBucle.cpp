#include <iostream>
using namespace std;

int main(){
    // creamos dos variables de tipo entero ya que trabajermos con números}
    // la primera define el comienzo 
    int inicio;
    // la segundo define hasta donde iremos
    int final;

    // solicitamos valores para ambos casos
    cout << "Ingresa un numero desde el que inicial: ";
    cin >> inicio, "\n";
    cout << "Ingrese el numero al que quiere llegar: ";
    cin >> final, "\n";

    // entramos en una condición que SI el numero ingresado con el que queremos iniciar es mayor que el numero al que queremos llegar 
    // marcará una inconsistencia mostrando un mensaje y retornando 1 
    if (final < inicio){
        cout << "Ingrese valores que sean consecutivos o ascendentes, NO NEGATIVOS \n";
        return 1;
    } // si es falso continua con el programa

    // declaramos una variable 'numPares' que nos ayudará de contador para sumar 1 si encuentra un número PAR en cada iteración
    int numPares = 0;
    // creamos un ciclo que contará 1 + 1 desde el número que ingreso el usuario hasta que sea igual o menor que el número que indicó llegar
    for (inicio; inicio <= final; inicio++){
        if (inicio % 2 == 0){
            cout << inicio << "\n";
            numPares++;
        // LA CONDICIÓN indicará que si el número en la cada iteración o sucesión de 1 + 1 a la que llega evalua que el numero NO TIENE RECIDUO ..
        // en su división, osea es 0, SI ES VERDEDERO entonces mostrará el número PAR y 'numPares' sumará 1 CADA VEZ QUE SEA VERDADERA LA CONDICIÓN
        }
        else { // En caso de que no sea así entonces continuará ignorando los impares
            continue;
        }
    }
    // al final mostrará un mensaje que indicará las veces que fue verdadero la condición para encontrar los numeros PARES
    cout << "Se encontraron: " << numPares << " numeros pares";
    return 0;
}