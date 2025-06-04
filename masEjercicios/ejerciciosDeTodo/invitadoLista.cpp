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
    int numero;
    int cantidad = 0;

    cout << "Cargue DNI de los invitados:" << endl;
    while(cantidad < MAX){
        cout << "DNI #" << cantidad + 1 << ": ";
        cin >> numero;
        if(yaEstaEnLaLista(dni, numero, cantidad)){
            cout << "Ingrese un DNI distinto..." << endl;
        }else{
            dni[cantidad] = numero;
            cantidad++;
        }
    }

    cout << "El listado de invitados queda asi: " << endl;
    for(int i = 0; i < MAX; i++){
        cout << "Invitado #" << i+1 << ": " << dni[i] << endl;
    }
}