#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "ingrese el primer numero: ";
    cin >> num1;
    cout << "ingrese el segundo numero: ";
    cin >> num2;

    if(num1 == num2){
        cout << "Los numero son iguales";
    } else if(num1 > num2) {
        cout << "El 1er numero es mayor al segundo";
    } else {
        cout << "El 2do numero es mayor al primero";
    }
    return 0;
}