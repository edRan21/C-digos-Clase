#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout << "Ingrese un numero que desee comparar: ";
    cin >> x >> y >> z;
    
    if(x > y){ // evaluamos primer número ingresado por el segundo, SI ES VERDAD evaluaremos una condición dentro por el número que fue mayor en...
        if (x > z){ // en la primera condición por el ultimo que ese evalua 'z'
            cout << x << " es mayor."; // SI ES MAYOR entonces 'x' indescutIblemente es mayor
        }
        else{ // SI ES FALSO entonces el 'z' fue mayor
            cout << z <<" es mayor."; // Se ejecuta*, PERO SI EN LA PRIMERA CONDICIÓN "( x > y )" 'y' resulta ser mayor entonces NADA DE LO QUE ..
        }                             // ESTUVO AQUI DENTRO SE EJECUTARÁ 
    } 
    else if(y > z){ // Se evaluará esta condición por el segundo número que se ingreso CON EL TERCER NÚMERO que también se ingreso.
        cout << y <<" es mayor."; // SI ES VERDAD que el segundo es mayor ENTONCES SE EXECUTA ESTO Y YA NO ESCRIRA NADA PARA EL TERCER NÚMERO, pero si no ...
    }
    else{ // SE EJECUTARÁ INDICANDO EL ULTIMO NÚMERO COMO EL MAYOR
        cout << z << " es mayor";
    }
    return 0;
}