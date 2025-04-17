#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int limite_inferior, limite_superior, intentos_max;
    cout << "ingrese el lim inf, el lim sup y los intentos max" << endl;
    cin >> limite_inferior >> limite_superior >> intentos_max;
    
    srand(time(nullptr));

    int numero_aleatorio = limite_inferior + rand() % (limite_superior - limite_inferior -1);
    int intentos, i;
    bool adivinado = true;

    for(i = 0; i < intentos_max ; i++){
        cout << "Intentos " << (i+1) << " / " << intentos_max << " Ingresa un numero para comenzar..." << endl;
        cin >> intentos;
        if(intentos < numero_aleatorio){
            cout << "El numero es mayor..." << endl;
        }else if(intentos > numero_aleatorio){
            cout << "El numero debe ser menor..." << endl;
        }else{
            cout << "ADIVINASTE SON OF A BITCH" << endl;
            adivinado = true;
        }
    }
    if(!adivinado){
        cout << " ... D: Perdiste, ahora... MORIRAS " << endl;
    }
}