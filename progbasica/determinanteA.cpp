// Matriz cuadrada 

#include <iostream>
using namespace std;

// Inicializamos el valor constante de la dimensión de la matriz 
const int N = 3;

// Declarar la matriz 
float A[N] [N];

// Implementar función del determinante 
float determinante2x2 (float M[2] [2]) {
    return M[0] [0] * M[1][1] - M[0] [1] * M[1] [0];
}

// Función determinante de 3x3
float determinante3x3 (float M[3] [3]) {
    float det = 0;

    float minor0 [2] [2] = {
        { M[1] [1], M[1] [2] },
        { M[2] [1], M[2] [2] }
    };
    
    float minor1 [2] [2] = {
        { M[1] [0], M[1] [2] },
        { M[2] [0], M[2] [2] }
    };

    float minor2 [2] [2] {
        { M[1] [0], M[1] [1] },
        { M[2] [0], M[2] [1]}
    };

    // Calcular los determinantes menores 
    det += M[0] [0] * determinante2x2(minor0);
    det -= M[0] [1] * determinante2x2(minor1);
    det += M[0] [2] * determinante2x2(minor2);

    return det;
}

int main() {
    cout << "Ingresa los elementos de la matriz de 3x3: \n";

    // Ciclos for anidados
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> A[i] [j];
        }
    }
    
    cout << "La determinante de la matriz es: " << determinante3x3(A);
    return 0;
}
