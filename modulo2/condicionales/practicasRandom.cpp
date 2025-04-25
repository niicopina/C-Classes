#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "Ingrese el minimo y el maximo de la escala para adivinar el numero: ";
    int minimo, maximo;
    cin >> minimo;
    cin >> maximo;
    if(minimo > maximo){
        cout << "El minimo debe ser menor al maximo, ingrese nuevamente: " << endl;
        cin >> minimo;
        cin >> maximo;
    }
    cout << "ahora ingrese la cantidad de intentos que desea tener: ";
    int intentos_max;
    cin >> intentos_max;
    if(intentos_max <= 0){
        cout << "Debe poner un numero mayor a 0, ingrese nuevamente: ";
        cin >> intentos_max;
    }

    srand(time(nullptr));

    int numero_aleatorio = minimo + rand() % (maximo - minimo -1);

    int intento, i;
    bool adivinado = false;

    for(i = 0; i < intentos_max; i++){
        cout << "Intento " << (i + 1) << " / " << intentos_max << endl;
        cin >> intento;
        if(intento < numero_aleatorio){
            cout << "el numero es mayor, intenta de nuevo" << endl;
        }else if(intento > numero_aleatorio){
            cout << "el numero es menor..." << endl;
        }else{
            cout << "adivinaste papu" << endl;
            adivinado = true;
        }
    }
    if(!adivinado){
        cout << "game overrrr";
    }
}