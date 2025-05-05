#include <iostream>
using namespace std;

int main(){
    const int CANT_EQUIPOS = 2;
    const int CANT_ALUMNOS = 5;

    string equipos[CANT_EQUIPOS][CANT_ALUMNOS];

    for(int i = 0; i < CANT_EQUIPOS; i++){
        cout << "Equipo " << i + 1 << ": "<< endl;
        for(int j = 0; j < CANT_ALUMNOS; j++){
            cout << "Ingrese el nombre del alumno " << j + 1 << ": " << endl;
            cin >> equipos[i][j];
        }
    }

    cout << "Listado de equipos" << endl;
    for(int i = 0; i < CANT_EQUIPOS; i++){
        cout << "Equipo " << i + 1 << ": ";
        for(int j = 0; j < CANT_ALUMNOS; j++){
            cout << equipos[i][j] << ", ";
        }
        cout << endl;
    }
}