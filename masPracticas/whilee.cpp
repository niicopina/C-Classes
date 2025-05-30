#include <iostream>
using namespace std;

float suma(float num1, float num2){
    return num1 + num2;
}
float resta(float num1, float num2){
    return num1 - num2;
}
float multiplicacion(float num1, float num2){
    return num1 * num2;
}
float division(float num1, float num2){
    if(num2 == 0){
        cout << "no se puede dividir por 0";
    }else {
        return num1 / num2;
    }
    return 0;
}

int main(){
    cout << "Calculadora de dos numeros" << endl;
    float num1, num2;
    int opcion;
    do{
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: " << endl;
        cin >> opcion;
        if(opcion == 1){
            cout << "1er numero: ";
            cin >> num1;
            cout << "2do numero: ";
            cin >> num2;
            cout << "La suma es = " << suma(num1, num2) << endl;
        }else if(opcion == 2){
            cout << "1er numero: ";
            cin >> num1;
            cout << "2do numero: ";
            cin >> num2;
            cout << "La resta es = " << resta(num1, num2) << endl;
        }else if(opcion == 3){
            cout << "1er numero: ";
            cin >> num1;
            cout << "2do numero: ";
            cin >> num2;
            cout << "La multiplicacion es = " << multiplicacion(num1, num2) << endl;
        }else if(opcion == 4){
            cout << "1er numero: ";
            cin >> num1;
            cout << "2do numero: ";
            cin >> num2;
            cout << "La division es = " << division(num1, num2) << endl;
        }

    }while(opcion != 5);
}