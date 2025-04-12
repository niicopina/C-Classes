#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int limite_inf, limite_sup, intentos_max;
    cout << "Juego de adivinanzas, ingresa el limite inferior, luego el superior: " << endl;
    cin >> limite_inf;
    cin >> limite_sup;
    cout << "ahora ingrese la cantidad de intentos maximos que desea tener para adivinar: " << endl;
    cin >> intentos_max;

    srand(time(nullptr));

    int num_aleatorio = limite_inf + rand() % (limite_sup - limite_inf -1);
    int intentos, i;
    bool adivinado = false;

    for(i = 0; i < intentos_max; ++i){
        cout << "Intento " << (i + 1) << " / " << intentos_max << endl;
        cin >> intentos;
        if(intentos < num_aleatorio){
            cout << "El numero es mayor" << endl;
        } else if(intentos > num_aleatorio){
            cout << "El numero es menor!" << endl;
        } else {
            cout << "Adivinaste!!" << endl;
            adivinado = true;
            break;
        }
    }
    if(!adivinado){
        cout << "Perdiste";
    }
    
}