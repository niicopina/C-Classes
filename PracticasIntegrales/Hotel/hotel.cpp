#include <iostream>
using namespace std;

int main(){
    //const int habitaciones = 3;
    //string habitacion[habitaciones];
    int subtotal_pagar = 0;
    int total_pagar = 0;

    cout << "Bienvenido al Hotel Alfonestrella!" << endl;
    int opcion;
    cout << "Elija la habitacion que prefiera reservar: "<< endl;
    cout << "1. Simple ($25000)" << endl;
    cout << "2. Especial ($45000)" << endl;
    cout << "3. Suite ($65000)" << endl;
    cin >> opcion;
    switch(opcion){
        case 1: 
            subtotal_pagar = 25000;
            cout << "1. Simple ($25000)"; 
            break;
        case 2: 
            subtotal_pagar = 45000;
            cout << "2. Especial ($45000)"; 
            break;
        case 3: 
            subtotal_pagar = 65000;
            cout << "3. Suite ($65000)"; 
            break;
        default: cout << "Invalido";
        
    }
    cout << endl;
    cout << "Ha elegido la habitacion: " << opcion
         << ", el monto pernocte es: " << subtotal_pagar << endl;
    cout << "Ahora elija la cantidad de dias que desea reservar: ";
    int dias_reserva;
    cin >> dias_reserva;
    total_pagar = dias_reserva * subtotal_pagar;
    
    cout << "Ha reservado " << dias_reserva << " dias de reserva"
         << ". El total es: " << total_pagar << endl;
    
}