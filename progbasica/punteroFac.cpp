#include <iostream>
using namespace std;

// Función que le pide un número al usuario que retorna el número para que la función del factorial la pueda llamar
int pedirValor(){
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;
    return N;
}

// Función que apunta la dirección de N
int factorial(int Numero){
    // Puntero a la dirección donde esta la varible 'Numero'
    int* ptr = &Numero;
    // Varible que guarda el valor original que se encuentra en el puntero 'ptr' 
    int Num = *ptr;
    // variable que almacena el valor ingresado y que sera reducido en uno en uno hasta que == 1
    int fact = *ptr;
    /* 
    Operación del factorial: mientras el valor ingresado de "referencia" sea diferente o igual a 1, se ejecuta lo que este dentro del loop.
    al reducir al NO SER DIFERENTES, deja de ejecutarse
    */
    while (fact != 1){
        fact = fact - 1;
        *ptr = *ptr * fact;
        
    }
    // MOSTRAMOS EN LA PANTALLA EL ULTIMO VALOR REGISTRADO DE '*ptr'
    cout << "El factorial del numero: " << Num <<"\nEn la direccion de la memoria RAM: " << &Numero << "\nEs: " << *ptr;
    return *ptr;
}

int main (){
    // Guardamos el valor que retorna pedirValor(); 
    int N = pedirValor();

    // Le pasamos como argumento el valor a factorial()
    factorial(N);
    
    return 0;

}


