#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void adivinar_numero(){
    int limite_inferior, limite_superior;
    cout << "Soy la PC y adivinare el numero que estas pensando, pero... no hagas trampa!" << endl;
    cout << "Dime el rango en el que esta el numero: "<< endl;
    cout << "Desde: ";
    cin >> limite_inferior;
    cout << "Hasta: ";
    cin >> limite_superior;
    
    int respuesta = 0; //1 = Es mayor / 2= Es menor / 3= Adivinaste!
    while(respuesta != 3 && limite_inferior <= limite_superior){
        int intento = (limite_inferior + limite_superior) / 2; //busqueda binaria
        cout << "Es " << intento << " tu numero?" << endl;
        cout << "Responde: 1 (es mayor), 2 (es menor), 3 (adivinaste!)" << endl;
        cin >> respuesta;

    }
}