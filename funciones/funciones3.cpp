#include <iostream>
using namespace std;

int suma (int a, int b){ return a + b;}
int resta (int a, int b){ return a - b;}
int mult (int a, int b){ return a * b;}
float division (float a, float b){
    if (a == 0) {
        cout << "No se puede dividor el 0, es una indeterminacion";
        return 1;
    }
    else {
        return a / b;
    }
}

int potencia (int base, int exponencial){
    int potencia = base;

    if (exponencial == 0) {
        potencia = base;
    }
    else {
        for (int i = 1; i < exponencial; i++){
            potencia = potencia * base;
        }
    }
    return potencia;
}

int main(){
    int opcion;
    int num1;
    int num2;

    do {
        cout << "\n\nCALCULADORA\n";
        cout << "1. Suma\n" << "2. Resta\n" << "3. Multiplicacion\n" << "4. Division\n" << "5. Potencia\n" << "6. Salir\n";
        cout << "Ingrese el numero de la opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 5){
            cout << "\nIngrese el primer numero a calcular: ";
            cin >> num1;
            cout << "Ingrese el segundo numero a calcular: ";
            cin >> num2;
        }

        switch (opcion)
        {
        case 1:
            cout << "La suma de " << num1 << " y " << num2 << " es: " << suma(num1, num2);
            break;
        case 2:
            cout << "La resta de " << num1 << " y " << num2 << " es: " << resta(num1, num2);
            break;
        case 3:
            cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << mult(num1, num2);
            break;
        case 4:
            cout << "La division de " << num1 << " y " << num2 << " es: " << division(num1, num2);
            break;
        case 5:
            cout << "La potencia de la base " << num1 << " y el exponente " << num2 << " es: " << potencia(num1, num2);
            break;
        case 6:
            cout << "Saliendo del programa.";
            break;
        default:
            cout << "Opcion invalida";
            break;
        }
    }
    while (opcion != 6);
    return 0;
}