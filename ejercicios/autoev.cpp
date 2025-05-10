#include <iostream>
using namespace std;

double suma(int num1, int num2){
    return num1 + num2;
}
double resta(int num1, int num2){
    return num1 - num2;
}
double multiplicacion(int num1, int num2){
    return num1 * num2;
}
double division(int num1, int num2){
    if(num2 == 0){
        cout << "Entrada invalida, no divida por 0: ";
        cin >> num2;
    }
    return num1 / num2;
}

int main(){
    cout << "Ingrese los numeros para la operacion: " << endl;
    double num1, num2;

    do{
        cout << "Elija la operacion deseada: " << endl;
        cout << "1. SUMA" << endl;
        cout << "2. Resta"<< endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "Opcion: " << endl;
        int opcion;
        cin >> opcion;
        if(opcion == 1){
            cout << "Primer numero: ";
            cin >> num1;
            cout << "Segundo numero: ";
            cin >> num2;
            cout << num1 << " + " << num2 << " = " << suma(num1, num2) << endl;
        }else if(opcion == 2){
            cout << "Primer numero: ";
            cin >> num1;
            cout << "Segundo numero: ";
            cin >> num2;
            cout << num1 << " - " << num2 << " = " << resta(num1, num2) << endl;
        }else if(opcion == 3){
            cout << "Primer numero: ";
            cin >> num1;
            cout << "Segundo numero: ";
            cin >> num2;
            cout << num1 << " * " << num2 << " = " << multiplicacion(num1, num2) << endl;
        }else if(opcion == 4){
            cout << "Primer numero: ";
            cin >> num1;
            cout << "Segundo numero: ";
            cin >> num2;
            cout << num1 << " / " << num2 << " = " << division(num1, num2) << endl;
        }else{
            cout << "Opcion invalida, debe ser 1, 2, 3, 4 : ";
            cin >> opcion;
        }
    }while(num2 != 0);    
}