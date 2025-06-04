#include <iostream>
using namespace std;
//Ejercicio – Verificar si un número ya está en una lista de invitados

bool yaEstaEnLaLista(const int dni[],int numero,int size){
    for(int i = 0; i < size; i++){
        if(numero == dni[i]){
            cout << "El DNI ya esta en la lista...";
            return true;
        }
    }
    return false;
}

int main(){
    const int MAX = 4;
    int dni[MAX];

    cout << "Cargue los DNI de los invitados: " << endl;
    for(int i = 0; i < MAX; i++){
        cout << "DNI #" << i+1 << ": ";
        cin >> dni[i];
    }
}