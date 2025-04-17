#include <iostream>
using namespace std;

double calcularAreaRectangulo(double base, double altura){
    return base * altura / 2;
}
int main(){
    double area;
    double base1, altura1;
    cout << "ingrese el valor de la base del rectangulo: " << endl;
    cin >> base1;
    cout << "ingrese la altura: " << endl;
    cin >> altura1;
    area = calcularAreaRectangulo(base1, altura1);
    cout << "El area es: " << area;
    return 0;
}