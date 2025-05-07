#include <iostream>
using namespace std;

bool esPar(int numero){
    return numero % 2 == 0;
}

bool dentroDelRango(int numero, int minimo, int maximo){
    return numero >= minimo && numero <= maximo;
}

const int MAX = 10;
int numeros[MAX];
bool yaExiste(const int numeros[], int numero, int size){
    for(int i = 0; i < size; i++){
        if(numeros[i] == numero){
            return true;
        }
    }
    return false;
}


int main(){
    cout <<"ingrese un numero entero: ";
    int numero;
    cin >> numero;
    if(esPar(numero)){
        cout << "El numero " << numero << " es par" << endl;
    }else{
        cout << "el numero "<< numero << " es impar" << endl;
    }
    cout << "ahora ingresa el rango de una escala: ";
    int minimo, maximo;
    cin >> minimo;
    cin >> maximo;
    if(dentroDelRango(numero, minimo, maximo)){
        cout << "El numero esta dentro del rango" << endl;
    }else{
        cout << "El numero no esta dentro del rango" << endl;
    }
}