#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x, y; // declaramos 'x' y 'y' como tipos "long long" ya que de esta forma nos aseguramos de que al multiplicar las variables imprima la longitud de dato correcta
    // si es "integrer" no podra mostrar el resultado preciso de la multiplicación si es que se ingresa un nuúmero de 4 o 5 digitos
    int sum, sub;
    long long mult;
    cin >> x;
    cin >> y;

    sum = x + y;
    mult = x*y;
    sub = x - y;

    cout << x << " + " << y << " = " << sum <<"\n";
    cout << x << " * " << y << " = " << mult <<"\n";
    cout << x << " - " << y << " = " << sub <<"\n";

    return 0;
}