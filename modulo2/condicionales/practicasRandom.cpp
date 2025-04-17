#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int limite_inferior, limite_superior, intentos_max;
    cout << "Ingrese en este orden: Limite inferior, limite superior e intentos maximos que desee: ";
    cin >> limite_inferior >> limite_superior >> intentos_max;

    srand(time(nullptr));
    int numero_aleatorio = limite_inferior + rand() % (limite_superior - limite_inferior -1);

    int intentos, i;
    bool adivinado = false;

    for(i = 0; i < intentos_max; i++){
        cout << "Intento " << (i+1) <<" / " << intentos_max << " Ingrese un numero: " << endl;
        cin >> intentos;
        if(intentos < numero_aleatorio){
            cout << "el numero debe ser mayor" << endl;
        }else if(intentos > numero_aleatorio){
            cout << "el numero debe ser menor" << endl;
        }else{
            cout << "adivinaste u son of a bitch adivinaste" << endl;
            adivinado = true;
        }
    }
    if(!adivinado){
        cout << "Game over hoe";
    }
}