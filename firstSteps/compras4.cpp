#include <iostream>
using namespace std;

//Productos
const int MAX_PROD = 100;
struct Producto {
    string nombre;
    double precio;
};
Producto productos[MAX_PROD] = {
    {"Tv", 1000000},
    {"PC", 955000},
    {"AAC", 1200000},
    {"SPK", 560000},
    {"GPU", 460000}
};

//metodos de pago
double transferencia(double subtotal){
    return subtotal * 0.8;
}
double debito(double subtotal){
    return subtotal * 0.9;
}
double credito(double subtotal){
    return subtotal * 1.5;
}

int main(){
    cout << "Nuestra seleccion de electrodomesticos TOP: "<< endl;
    for(int i = 0; i < MAX_PROD; i++){
        cout << i + 1<< ". " << productos[i].nombre << " - $"<<productos[i].precio << endl;
    }
    //seleccion productos
    double subtotal;
    int opcion;
    do{
        cout << "Añada productos al carro de compras (0 para salir): " << endl;
        cin >> opcion;
        if(opcion >= 1 && opcion <= MAX_PROD){
            subtotal += productos[opcion -1].precio;
            cout << "Agrega: "<< productos[opcion -1].nombre 
            << " ($" << productos[opcion - 1].precio << ")" << endl; 
        }else if(opcion != 0){
            cout << "opcion invalida" << endl;
        }
    }while(opcion != 0);

    cout << "Subtotal = " << subtotal << endl;

    int metodo_pago;
    cout << "\nSeleccione método de pago:\n";
    cout << "1. Transferencia (20 de descuento)\n";
    cout << "2. Débito (10 de descuento)\n";
    cout << "3. Crédito (5 de recargo)\n";
    cout << "Opción: ";
    cin >> metodo_pago;
    double total;

    switch(metodo_pago){
        case 1: total = transferencia(subtotal);
        break;
        case 2: total = debito(subtotal);
        break;
        case 3: total = credito(subtotal);
        break;
        default: cout << "metodo invalido";
    }
    cout << "El total de la compra con el metodo de pago seleccionado es: $"
        << total << endl;
}