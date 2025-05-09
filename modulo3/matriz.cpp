#include <iostream>
using namespace std;

int main(){
    const int CANT_EQ = 2;
    const int CANT_AL = 5;
    string equipos[CANT_EQ][CANT_AL];

    for(int i = 0; i < CANT_EQ; i++){
        cout << "Equipo " << i + 1 << ": " << endl;
        for(int j = 0; j < CANT_AL; j++){
            cout << "Ingrese nombre del alumno: " << j + 1 << ": " << endl;
            cin >> equipos[i][j];
        }
    }
    cout << "Listado de equipos: "<< endl;
    for(int i = 0; i < CANT_EQ; i++){
        cout << "Equipo: " << i + 1 << ": " << endl;
        for(int j = 0; j < CANT_AL; j++){
            cout << equipos[i][j] << ", ";
        }
    }
}