#include <iostream>
using namespace std;

//Verificar si un numero es par usando funcion booleana

bool esPar(int numero){
    if(numero % 2 == 0){
        return true;
    }
    return false;
}

int main(){
    int numero;
    cout << "ingrese un numero: ";
    cin >> numero;
    if(esPar(numero)){
        cout << "el numero " << numero << " es par." << endl;
    }else{
        cout << "el numero " << numero << " es impar." << endl;
    }
}