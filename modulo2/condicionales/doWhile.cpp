#include <iostream>
using namespace std;

int main(){
    int numeroSecreto = 3;
    int adivina;
    do{
        cout << "Adivina mi numero marrano" << endl;
        cin >> adivina;
    }while(adivina != numeroSecreto);
    cout << "AHA!! asi que lees mentes eeeee";
    return 0;
}