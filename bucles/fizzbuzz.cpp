#include <iostream>
using namespace std;

int main(){
    cout << "         Bienvenido al juego Bizzbuzz\n";
    
    for(int i = 1; i < 101; i++){
        bool numb = true;
        if (i % 3 == 0 && i % 5 == 0){
            cout << "BIZZBUZZ\n";
            numb = false;
        }
        else if (i % 3 == 0){
            cout << "BIZZ\n";
            numb = false;
        }
        else if (i % 5 == 0){
            cout << "BUZZ\n";
            numb = false;
        }
        if (numb){
            cout << " " << i <<"\n";
        }
        else{
            continue;
        }
    }
    return 0;

}