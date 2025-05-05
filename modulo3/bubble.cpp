#include <iostream>
#include <algorithm>
using namespace std;

void promedio_numeros(){
    const int MAX = 100;
    int numeros[MAX];
    int cantidad;
    int suma = 0;
    cout << "ingrese la cantidad de numeros del arreglo: ";
    cin >> cantidad;
    for(int i = 0; i < cantidad; i++){
        cout << "ahora agregue los numeros del arreglo: ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    float promedio = (float)suma / cantidad;
    cout << "El promedio es: " << promedio << endl;

    cout << "Ahora elija la posicion del arreglo que desee cambiar: ";
    int posicion;
    cin >> posicion;
    if(posicion >= 0 && posicion < cantidad){
        cout << "La posicion elegida tiene este numero asignado: "
        << numeros[posicion] << endl;
        cout << "ahora modifique ese numero: ";
        cin >> numeros[posicion];
        for(int i = 0; i < cantidad; i++){
            cout << "posicion: " << i << " - " << numeros[i] << endl;
        }
    }else{
        cout << "posicion invalida: ";
        cin >> posicion;
    }
    //creamos un bubble para reordenar el arreglo
    int orden;
    do{
        cout << "Desea ordenar los numeros?" << endl;
        cout << "1. De menor a mayor" << endl;
        cout << "2. De mayor a menor" << endl;
        cout << "Opcion: ";
        cin >> orden;
        if(orden == 1){
            for(int i = 0; i < cantidad - 1; i++){
                for(int j = 0; j < cantidad - i -1; j++){
                    if(numeros[j] > numeros[i] + 1){
                        swap(numeros[j], numeros[j + 1]);
                    }
                }
            }
            cout << "Ordenados de menor a mayor: "<<endl;
        }else if(orden == 2){
            for(int i = 0; i < cantidad; i++){
                for(int j = 0; j < cantidad - i - 1; j++){
                    if(numeros[j] < numeros[j + 1]){
                        swap(numeros[j], numeros[j + 1]);
                    }
                }
            }
            cout << "Ordenados de mayor a menor: "<<endl;
        }
    }while(orden != 1 && orden != 2);

    for(int i = 0; i < cantidad; i++){
        cout << "Posicion: "<< i << " : " << numeros[i] << endl;
    }
}

int main(){
    promedio_numeros();
}