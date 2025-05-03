#include <iostream>
using namespace std;

//Arrays de productos
const int cantidad_productos = 5;
string productos[cantidad_productos] = {
    "Pan", "Leche", "Queso", "Manteca", "Yerba"
};
double precios[cantidad_productos] = {
    1000, 2500, 4000, 3000, 4500
};

//Funciones para cada metodo de pago
double pagar_transferencia(double subtotal){
    return subtotal * 0.90;
}
double pagar_debito(double subtotal){
    return subtotal;
}
double pagar_credito(double subtotal){
    return subtotal * 1.05;
}

int main(){
    double subtotal = 0;
    int opcion;
    cout << "Productos disponibles: "<<endl;
    for(int i = 0; i < cantidad_productos ; i++){
        cout << i + 1 << ". " << productos[i] << "- $" << precios[i] << endl;
    }
    //Seleccion de productos
    do{
        cout << "Elija un producto por numero (0 para finalizar): " ;
        cin >> opcion;
        if(opcion >=1 && opcion <= cantidad_productos){
            subtotal += precios[opcion - 1];
            cout << "Agrega: "<<productos[opcion -1]<<" ($"<<precios[opcion -1]<<")"<< endl;
        }else if(opcion < 0 || opcion > cantidad_productos){
            cout << "producto invalido"<< endl;
        }
    }while(opcion != 0);

    cout << "Subtotal de productos: $" << subtotal << endl;

    //seleccion metodo de pago
    int metodo_pago;
    cout << "Seleccione metodo de pago: "<<endl;
    cout << "1. Transferencia (10porciento descuento)" << endl;
    cout << "2. Debito (precio regular)" << endl;
    cout << "3. Credito (5 porciento de recargo)" << endl;
    cout << "Opcion: ";
    cin >> metodo_pago;

    double total_final;
    switch(metodo_pago){
        case 1: total_final = pagar_transferencia(subtotal);
        break;
        
        case 2: total_final = pagar_debito(subtotal);
        break;

        case 3: total_final = pagar_credito(subtotal);
        break;

        default: cout << "Opcion invalida" << endl;
    };
    cout << "Total a pagar: $"<< total_final << endl;
    return 0;
};