#include <iostream>  // LIBRERIA ESTANDAR DE ENTRADA Y SALIDA DE DATOS DE C++
#include <vector>    // LIBRERIA EN LA UTILIZACIÓN DE UN TIPO DE ARREGLOS/LISTA que llamaremos vector (flexible y manipulable en ejecución)
#include <cstdlib>   //    
#include <ctime>     // Libreria que toma el tiempo en el momento en que se ejecuta el programa
#include <chrono>    // LIBRERIA QUE MIDE EL TIEMPO CON MAYOR PRECISIÓN DE UN PROCESO
using namespace std;

int main (int argc, char* argv[]) {    // la función principal va a contener como argumentos lo que provocará que desde ...
    if (argc < 2){                     // la terminal solicite datos y en especial un entero. 
        cout << "Uso: " << argv[0] << " N\n"; // si no ingresamos ningun valor devolverá este mensaje indicando que nuestro argumento no contiene ningún valor.
        return 1;                       // lo que provocará que cierre el programa indicando un erro.
    }

    // Si el valor es valido, se guanda en una varible de tipo entero llamada 'N'
    // , e indican que empieza desde el indice '1'
    int N = atoi(argv[1]);
    if (N <= 0) {                            // EVALUAMOS, SI la varible que guardo nuestro argumento es menor o igual a 0
        cout << "N debe ser mayor que 0\n";  // INDICA EL MENSAJE DE SALIDA...
        return 1;                            // y cierra el programa 
    }

    srand(time(0));  // llamamos una función 'srand' (generador de números aleatorios) con el parametro 'time' que indica en segundo desde el momento en que se ejecute asegurando darme el tiempo a la generación de númmero
    vector<int> arr(N);  // inicializamos un vector 'arr' de tipo entero con el tamaño del número que ingrese al ejecutar el programa 

    double total = 0;      // variable 'total' de gran longitud de almacenamiento con el valor de 0 (suponiendo que acumulará un valor)

    for (int rep = 0; rep < 100; rep++){ // bucle que repetirá las instrucciones de adentro 99 veces
        // Bucle que genera el arreglo aleatorio
        for (int i = 0; i < N; i++) arr[i] = rand(); // este bucle recorrerá cada posición del arreglo de tamaño 'N' y a cada posición almacenará un número aleatorio

        // Elegir posición aleatoria como elemento a buscar
        int pos = rand() % N; // La varible de 'pos' guardará aleatoriamente el número que resulte de la operación "mod" con 'N'.
        int buscado = arr[pos]; // Y 'buscado' va a almacenarla como posición que queremos encontrar en el arreglo.

        auto inicio = chrono::high_resolution_clock::now();

        // Búsqueda líneal
        int idx = -1;
        for (int i = 0; i < N; i++){
            if (arr[i] == buscado) {
                idx = i;
                break;
            }
        }
        
        auto fin = chrono::high_resolution_clock::now();
        chrono::duration<double, micro> dur = fin - inicio;
        total += dur.count();
    }

    cout << "Tamaño del arreglos: " << N << "\n";
    cout << "Tiempo promedio en 100 corridas: " << (total / 100.0) << " microsegundos\n";

    return 0;
}