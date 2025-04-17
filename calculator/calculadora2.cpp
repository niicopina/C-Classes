#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    string operador;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el operador (+, -, *, /): " << endl;
    cin >> operador;
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;

    if(operador == "+"){
        cout << "Suma: " << num1 + num2 << endl;
    }else if(operador == "-"){
        cout << "Resta: " << num1 - num2 << endl;
    }else if(operador == "*"){
        cout << "Multiplicacion: " << num1 * num2 << endl;
    }else if(operador == "/"){
        if(num2 != 0){
            cout << "Division: " << num1 / num2 << endl;
        }else{
            cout << "HUH???";
        }
    }    
}