#include <iostream>
using namespace std;

int main(){
    float nota;
    const float notaAprobado = 6, notaPromocionado = 8;
    cout << "Ingrese la nota obtenida en el examen: ";
    cin >> nota;

    if(nota >= notaAprobado){
        cout << "Examen aprobado " << endl;
        if(nota >= notaPromocionado){
            cout << "y Promocionado" << endl;
        }
    } else {
        cout << "Examen reprobado...";
    }
    return 0;
}