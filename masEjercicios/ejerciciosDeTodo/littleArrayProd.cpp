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
bool estaEnLaLista(const int productos[], int buscado, int size){
    for(int i = 0; i < size; i++){
        if(buscado == productos[i]){
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
    int opcion;
    cout << "Desea saber si un codigo ya fue cargado?" << endl;
    do{
        cout << "1. Verificar codigo" << endl;
        cout << "2. Salir." << endl;
        cout << "Opcion: ";
        cin >> opcion;
        if(opcion == 1){
            cout << "Ingrese el codigo para buscarlo: ";
            int buscado;
            cin >> buscado;
            if(estaEnLaLista(productos, buscado, MAX)){
                cout << "Ya existe en la lista" << endl;
            }else{
                cout << "No se encuentra en la lista" << endl;
            }
        }
    }while(opcion != 2);
}