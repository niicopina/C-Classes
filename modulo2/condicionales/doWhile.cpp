#include <iostream>
using namespace std;

int main(){
    int numSecreto = 4;
    int adivina;
    do{
        cout << "Intenta adivinar lo que piensooo: " ;
        cin >> adivina;
    } while(numSecreto != adivina);
    cout << "Vaya eres un mago??";
    return 0;
}