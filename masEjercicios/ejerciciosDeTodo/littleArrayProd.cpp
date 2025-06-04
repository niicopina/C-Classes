#include <iostream>
using namespace std;

bool numeroRepetido(const int productos[], int numero, int size){
    for(int i = 0; i < size; i++){
        if(numero == productos[i]){
            return true;
        }
    }
    return false;
}

int main(){
    const int MAX = 4;
    int productos[MAX];
    int cantidad = 0;
    int numero;

    cout << "Ingrese los codigos de los productos: " << endl;
    while(cantidad < MAX){
        cout << "Cod #" << cantidad + 1 << ": ";
        cin >> numero;
        if(numeroRepetido(productos, numero, cantidad)){
            cout << "Ese codigo ya fue cargado previamente..." << endl;
        }else{
            productos[cantidad] = numero;
            cantidad++;
        }
    }
    cout << "Los codigos de productos son: " << endl;
    for(int i = 0; i < MAX; i++){
        cout << "Codigo #" << i+1 << ": " << productos[i] << endl;
    }
}