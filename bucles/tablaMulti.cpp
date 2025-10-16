#include <iostream>
using namespace std;

int main(){
    int num;  // Creamos nuestra variable que almacenará el número que se ingrese
    cout << "Ingrese el numero que desee ver su tabla de multiplicar hasta el 15: "; // indicamos que mostrará la multiplicación hasta el 15
    cin >> num, "\n"; // después de ingresar damos un salto de línea 

    for (int i = 0; i <= 15; i++){ // el bucle nos permitirá multiplicar el numero ingresado 'num' hasta 15
        // por lo que se imprime directamente la multiplicación.
        cout << num * i << ", ";

        // El flujo sería el siguiente. Cuando i = 0 en el bucle, multiplica (0 * 'num') y lo muestra en la pantalla...
        // for aumenta en cada iteración o en otras palabras si se ejecuta cuando i = 0, al evaluar la condición de que i <= 15
        // vuelve a ejecutar aumentado en 1 a i: i++

    }
    return 0;
}