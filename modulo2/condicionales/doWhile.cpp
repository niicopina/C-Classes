#include <iostream>
using namespace std;

int main(){
    int numSecreto = 5; 
    int numUsuario;
    do {
        cout << "Trata de adivinar el numero que estoy pensando..." << endl;
        cin >> numUsuario;
    } while (numUsuario != numSecreto);

    cout << "Lo adivinaste! vaya vaya...";
    return 0;
}