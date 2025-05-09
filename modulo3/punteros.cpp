#include <iostream>
#include <string>
using namespace std;

int main(){
    const int cant_productos = 3;
    string productos[cant_productos];
    float precios[cant_productos];

    //punteros
    string* ptr_productos = productos;
    float* ptr_precios = precios;

    //datos
    for(int i = 0; i < cant_productos; i++){
        cout << "ingrese el producto " << i + 1 << ": " << endl;
        cin >> *(ptr_productos + i);
        cout << "ingrese su precio" << i + 1 << ": " << endl;
        cin >> *(ptr_precios + i);
    }

    cout << "Listado completo: " << endl;
    for(int i = 0; i < cant_productos; i++){
        cout << "Producto: " << *(ptr_productos + i) <<
            " - Precio = $" << *(ptr_precios + i ) << endl;
    }
}