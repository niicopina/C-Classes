#include <iostream>
using namespace std;

//productos
const int cantidad_productos = 5;
string productos[cantidad_productos] = {
    "Remera", "Pantalon", "zapatilla", "gorra", "vestido"
};
double precios[cantidad_productos] = {
    16000, 30000, 110000, 10000, 70000
};
//funciones para metodos de pago
double transferencia(double subtotal){ //10% descuento
    return subtotal * 0.9;
}
double debito(double subtotal){ //sin descuentos
    return subtotal;
}
double credito(double subtotal){ //5% de recargo
    return subtotal * 1.05;
}

int main(){
    double subtotal = 0;
    int opcion;
    cout << "Productos disponibles: " << endl;
    for(int i = 0; i < cantidad_productos; i++){
        cout << i + 1 << ". " << productos[i] << " - $" << precios[i] << endl;
    }
    //seleccion de productos
    do{
        cout << "Elija productos por numero (0 para terminar): ";
        cin >> opcion;
        if(opcion >= 1 && opcion <= cantidad_productos){
            subtotal += precios[opcion - 1];
            cout << "Agrega: "<<productos[opcion - 1] << " ($"<<precios[opcion - 1] << ")"<< endl;
        }else if(opcion < 0 || opcion > cantidad_productos){
            cout << "Invalido" << endl;
        }
    }while(opcion != 0);
    cout << "Subtotal = $"<<subtotal << endl;

    //seleccion metodo de pago
    int metodo_pago;
    cout << "Seleccione metodo de pago: "<<endl;
    cout << "1. transferencia (10 de descuento)"<<endl;
    cout << "2. debito" <<endl;
    cout << "3. credito (5 de recargo)" << endl;
    cout << "Opcion :";
    cin >> metodo_pago;
    double total;
    switch(metodo_pago){
        case 1: total = transferencia(subtotal);
        break;
        case 2: total = debito(subtotal);
        break;
        case 3: total = credito(subtotal);
        break;
        default: cout << "Metodo de pago invalido" << endl;
    }
    cout << "Total a pagar: $" << total << endl;
    return 0;
}