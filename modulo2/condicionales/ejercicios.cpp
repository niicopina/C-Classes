#include <iostream>
using namespace std;

int main(){
    //Condicionales IF ELSE
    int num1, num2;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;

    if(num1 == num2){
        cout << "Los numero son iguales" << endl;;
    } else if(num1 > num2) {
        cout << "El 1er numero es mayor al segundo" << endl;
    } else {
        cout << "El 2do numero es mayor al primero" << endl;
    }
    //SWITCH
    cout << "Ahora veremos el Switch" << endl;
    int opcion;
    cout << "Seleccione un idioma (1, 2 o 3)" << endl;
    cout << "1. Español" << endl;
    cout << "2. English" << endl;
    cout << "3. Italiano" << endl;
    cin >> opcion;
    switch (opcion){
        case 1: cout << "Hola querido como andas?";
        break;
        case 2: cout << "Hello pal how are you?";
        break;
        case 3: cout << "Buongiorno amigo come estai?";
        break;
        default: cout << "Not a valid option";
        break;
    }
    return 0;
}