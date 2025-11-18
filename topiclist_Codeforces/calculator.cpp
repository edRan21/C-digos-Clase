#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    
    cin >> X >> Y;
    int suma = X + Y;
    long long mult = X * Y;
    int res = X - Y;

    cout << X << " + " << Y << " = " << suma << "\n";
    cout << X << " * " << Y << " = " << mult << "\n";
    cout << X << " - " << Y << " = " << res << "\n";

    return 0;
}