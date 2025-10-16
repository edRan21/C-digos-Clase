// busqueda lineal

#include <iostream>
using namespace std;


int main(){
    // definimos arreglo de 10000 posiciones (sin declarar ningún valor dentro de este por el momento)
    int arreglo[10000];

    // Utilizamos un ciclo "for" para recorrer el arreglo, desde la posición '0' y sumarle 1 a la posición DE ESTA FORMA AUTO-RRELLENA EL BUCLE
    for(int i = 0; i<10000; i++){
        arreglo[i] = i + 1;
        // imprime el valor de la posición en cada iteración
        cout << arreglo[i];
    }

    // El usuario ingresa un numero que almacenará la variable 'numero'
    cout << "Ingrese un numero a buscar: ";
    int numero;
    // creamos la varible boolena que nos verificara Si el numero fue encontrado
    bool encontrado = false;
    cin >> numero, "\n";
    
    // Construimos un nuevo bucle que RECORRERÁ el arreglo pero con una condición
    
    for(int i = 0; i < 10000; i++){

        // La condición dentro del bucle evaluará en cada iteración de los elemento del arreglo si el 'numero' que ingreso el usuario
        // es igual a algún numero del arreglo
        if(arreglo[i] == numero){
            cout << "El numero se encuentra en la posicion: " << i << "\n";
            // La variable boolena cambiará si el número encontrado es verdadero dentro de la condición E imprimirá el mensaje de confirmación
            encontrado = true;
            // SI fue encontrado el número cerrará el programa 'break' POR LO QUE NO EJECUTA LAS LINEAS DE CÓDIGO POSTERIORES
            break;
        }
    }
    // SI en la condición del recorrido 'for' no encontro el numero, evaluamos fuera del bucle una condición SI 'encontrado' es diferente,
    // SI ES VERDADERO o sea "encontrado = False" --linea 22 ES DIFERENTE
    if(!encontrado){
        cout << "El numero no se encuentra en la lista. \n";
    }
    return 0;
}