#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void adivinar_numero(){
    int limite_inferior, limite_superior;
    cout << "Piensa un numero asi lo adivino, pero... no hagas trampa!" << endl;
    cout << "Listo? Dime el rango en el que esta el numero: "<< endl;
    cout << "Desde: ";
    cin >> limite_inferior;
    cout << "Hasta: ";
    cin >> limite_superior;
    
    vector<int> historial;

    int respuesta = 0; //1 = Es mayor / 2= Es menor / 3= Adivinaste!
    while(respuesta != 3 && limite_inferior <= limite_superior){
        int intento = (limite_inferior + limite_superior) / 2; //busqueda binaria
        historial.push_back(intento);
        cout << "Es " << intento << " tu numero?" << endl;
        cout << "Responde: 1 (es mayor), 2 (es menor), 3 (adivinaste!)" << endl;
        cin >> respuesta;
        if(respuesta == 1){
            limite_inferior = intento + 1;
        } else if(respuesta == 2){
            limite_superior = intento -1;
        } else if(respuesta == 3){
            cout << "Aha! soy adivinx!!" << endl;
        } else {
            cout << "opcion invalida" << endl;
        }
    }
    if(limite_inferior > limite_superior){
        cout << "No hagas trampa che!!" << endl;
    }
    for(int n : historial){
        cout << n << " ";
    }
}
int main(){
    cout << "A ver a ver, la pc Robotik adivinara tu numero" << endl;
    adivinar_numero();
    return 0;
}