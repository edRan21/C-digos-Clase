#include <iostream>
using namespace std;

int main(){

    int diaActual;
    int mesActual;
    int anoActual;

    int dia;
    int mes;
    int ano;

    cout << "ingrese fecha de nacimiento DD/MM/AAAA (en ese orden): \n";
    cin >> dia;
    cin >> mes;
    cin >> ano;

    cout << "ingrese fecha ACTUAL en formato DD/MM/AAAA (en ese orden): \n";
    cin >> diaActual;
    cin >> mesActual;
    cin >> anoActual;

    // --- Validación correcta de las fechas ---
    if (dia < 1 || dia > 31 || diaActual < 1 || diaActual > 31 ||
        mes < 1 || mes > 12 || mesActual < 1 || mesActual > 12 ||
        ano < 1 || anoActual < ano) {
        cout << "Fechas invalidas. Por favor, revise los datos.\n";
        return 1; // Termina el programa si hay un error
    }

    
    int diasVividos, mesesVividos, anosVividos;

    diasVividos = diaActual - dia;
    mesesVividos = mesActual - mes;
    anosVividos = anoActual - ano;

    // Ajustar mes si el mes de nacimiento es mayor 
    if(mesesVividos < 0 || (mesesVividos == 0 && diasVividos < 0)){
        anosVividos--;
        mesesVividos +=12;
    }
    
    // Ajustar dias si el dia de nacimiento es mayor al actual
    if(diasVividos < 0){
        mesesVividos--;
        diasVividos +=31;
    }

    // Si al ajustar dias, el mes se vuelve negativo, se ajustará el año de nuevo
    if(mesesVividos < 0){
        anosVividos--;
        mesesVividos +=12;
    }

    cout << "You have " << diasVividos << " days " << mesesVividos << " months and " << anosVividos << " years \n";
    
    return 0;
}