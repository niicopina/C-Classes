#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    /* 
    list<int> milista = {10, 9, 8, 4};
    auto ultimo = milista.end(); // auto es una posicion en la memoria
    milista.insert(ultimo, 20);
    for(int numero : milista){
        cout << numero << endl;
    }
    */
    vector<int> mivector = {5, 1};
    cout << "cantidad de elementos " << mivector.size() << endl;
    cout << mivector[1] << endl;
    mivector.push_back(22);
    mivector.insert(mivector.begin(), 10);
    
    for(int i = 0; i < mivector.size(); i++){
        cout << mivector[i] << endl;
    }
    cout << "*********************" << endl;

    string array[6] = {"manzana", "banana", "pera", "uvas", "tomate", "higos"};
    double precios[6] = {200, 500, 400, 600, 670, 700};
    for(int i = 0; i < 6; i++){
        cout << " i vale " << i << endl;
        for(int j = 0; j < 6; j++){
            cout << " j vale " << j << endl;
            string a = array[i];
            cout << "el array en la posicion " << i << " es " << array[i] << endl;
            cout << "el array en la posicion " << j << " es " << array[j] << endl;
            if(array[j] > a){
                cout << "Array en j es > arreglo en i" << endl;
                array[i] = array[j];
                array[j] = a;
                double precio_aux = precios[i];
                precios[i] = precios[j];
                precios[j] = precio_aux;
            }
        }
    }
    for(int i = 0; i < 6; i++){
        cout << array[i] << endl;
    }
}