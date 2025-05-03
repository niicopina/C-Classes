#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_NUM = 100;

bool numeroIngresado(const int numeros[], int numero, int size){
    for(int i = 0; i < size; i++){
        if(numeros[i] == numero){
            return true;
        }
        return false;
    }
}

void mostrarNumeroIngresado(const int numeros[], int size){
    cout << "El numero ingresado fue: ";
    for(int i = 0; i < size; i++){
        cout << numeros[i] << " - ";
    }
}

int main(){
    int limite_inf, limite_sup, intentos_max;
    cout << "En este juego de adivinanza debe ingresar el rango de numeros en el que se encontrara el numero secreto" << endl;
    cout << "comencemos ingresando el limite inferior de la escala: ";
    cin >> limite_inf;
    cout << "ingrese ahora el limite superior: ";
    cin >> limite_sup;
    while(limite_inf >= limite_sup){
        cout << "El limite inferior debe ser menor al superior, ingrese nuevamente el limite inferior: ";
        cin >> limite_inf;
        cout << "ingrese el limite superior: ";
        cin >> limite_sup;
    }
    cout << "ahora ingrese la cantidad de intentos que desea tener para adivinar: ";
    cin >> intentos_max;
    while(intentos_max <= 0){
        cout << "la cantidad de intentos debe ser mayor a 0, ingrese nuevamente: ";
        cin >> intentos_max;
    }

    srand(time(nullptr));
    int numero_aleatorio = limite_inf + rand() % (limite_sup - limite_inf + 1);

    int intentos, i;
    bool adivinado = false;
    int numeros_ingresados[MAX_NUM];
    int numeros_ingresados_size = 0;
}