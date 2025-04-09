#include <iostream>
using namespace std;

int main(){
    int numero;
    cout << "ingrese un numero: ";
    cin >> numero;
    while(numero <= 100){ //si se ingresan numeros que no cumplan la condicion, la validacion no se completa entonces el ciclo continua
        cout << "Ingrese otro numero: ";
        cin >> numero;
    }
    int opcion = 0;
    do {
        cout << "Ingrese 1 para mostrar mensaje" << endl;
        cout << "Ingrese 2 para hacer algo mas" << endl;
        cout << "Ingrese 0 para salir" << endl;

        cout << "Ingrese opcion para ejecutar" << endl;
        cin >> opcion;

    }
    while(opcion != 0); //se mostrara el menu hasta que la opcion sea 0
    return 0;
}