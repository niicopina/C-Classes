#include <iostream>
using namespace std;

//Verificar si un numero es par usando funcion booleana

bool esPar(int numero){
    if(numero % 2 == 0){
        return true;
    }
    return false;
}

//Verificar si un numero esta dentro del rango
bool estaEnRango(int numero, int minimo, int maximo){
    if(numero >= minimo && numero <= maximo){
        return true;
    }else{
        return false;
    }
}

//Verificar si el numero esta en el array
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
    //bool yaExiste()
    int numeros[MAX];
    int size = 0;
    int numero;
    int cantidad;
    cout << "ingrese la cantidad: ";
    cin >> cantidad;
    
    for(int i = 0; i < cantidad; i++){
        cout << "Numero #"<<(i+1)<<": ";
        cin >> numero;
        if(yaExiste(numeros, numero, size)){
            cout << "el numero ya esta en el array No se guardara"<< endl;
            i--;
        }else{
            numeros[size] = numero;
            size++;
        }
    }
    cout << "numeros ingresados sin repetir: "<< endl;
    for(int i = 0; i < size; i++){
        cout << numeros[i] << " ";
    }
    cout << endl;
    

    /*
    //*bool esPar()*
    int numero;
    cout << "ingrese un numero: ";
    cin >> numero;
    if(esPar(numero)){
        cout << "el numero " << numero << " es par." << endl;
    }else{
        cout << "el numero " << numero << " es impar." << endl;
    } 
    */

    /*
    //*bool estaEnRango()
    cout << "ingrese el valor minimo de la escala: ";
    int minimo;
    cin >> minimo;
    cout << "ingrese el valor maximo de la escala: ";
    int maximo;
    cin >> maximo;
    cout << "ahora ingrese un numero: ";
    int numero;
    cin >> numero;
    if(estaEnRango(numero, minimo, maximo)){
        cout << "el numero "<< numero << " esta en rango"<<endl;
    }else{
        cout << "el numero "<< numero << " esta fuera de rango"<<endl;
    }
    */

}