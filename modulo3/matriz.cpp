#include <iostream>
#include <string>
using namespace std;

int main(){
    const int cant_equipos = 3;
    const int cant_alumnos = 3;
    string equipos[cant_equipos][cant_alumnos];

    for(int i = 0; i < cant_equipos; i++){
        cout << "Equipo " << i + 1 << "- " << endl;
        cout << "Ingrese a los alumnos en cada equipo: " << endl;
        for(int j = 0; j < cant_alumnos; j++){
            cout << j + 1 << ": ";
            cin >> equipos[i][j];
        }
    }
    cout << "- Listado de equipos -" << endl;
    for(int i = 0; i < cant_equipos; i++){
        cout << "Equipo " << i + 1 << " - " << endl;
        for(int j = 0; j < cant_alumnos; j++){
            cout << equipos[i][j] << ", " << endl;
        }
    }
}