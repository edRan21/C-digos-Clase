#include <iostream>
using namespace std;

int suma(int a, int b){return a + b;}
int resta(int a, int b){return a - b;}
int multi(int a, int b){return a * b;}
int division(float a, float b){return a / b;}

int main (){
    int a;
    int b;
    cout << "Ingrese dos numeros a calcular: \n";
    cin >> a >> b;
    cout << "la suma es: " << suma(a, b) << " la resta es : " << resta(a, b) << " la multiplicacion es: " << multi(a, b) << " y su division es: " << division(a, b) << "\n";
    return 0;
}
