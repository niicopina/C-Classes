#include <iostream>
#include <string>
using namespace std;

int main(){
    const int cant_prod = 3;
    const int precio_prod = 1;
    string lista_prod[cant_prod][precio_prod];
    cout << "Haremos una lista de sus productos con el precio." << endl;
    for(int i = 0; i < 3; i++){
        string name;
        cout << "Nombre: ";
        cin >> name;
        cout << "Producto: " << i + 1 << " " << name << endl;
        for(int j = 0; j < 1; j++){
            cout << "- Precio: $";
            cin >> lista_prod[i][j];
        }
    }
    cout << "Su lista queda asi: " << endl;
    for(int i = 0; i < 3; i++){
        cout << "Producto " << i + 1 << " - " << endl;
        for(int j = 0; j < 1; j++){
            cout << lista_prod[i][j] << " " << endl;
        }
    }
}