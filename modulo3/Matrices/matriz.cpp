#include <iostream>
#include <string>
using namespace std;

int main(){
    const int equipos = 3;
    const int alumnos = 3;
    string listado[equipos][alumnos];
    for(int i = 0; i < 3; i++){
        cout << "Equipo " << i + 1 << " - " << endl;
        cout << "Agregue a los alumnos en cada equipo: ";
        for(int j = 0; j < 3; j++){
            cout << j + 1 << ": ";
            cin >> listado[i][j];
        }
    }
    cout << "El listado queda asi: " << endl;
    for(int i = 0; i < 3; i++){
        cout << "Equipo " << i+ 1 << " - " << endl;
        for(int j = 0; j < 3; j++){
            cout << listado[i][j] << " " << endl;
        }
    }
    cout << "Acceda a un alumno segun su posicion en la matriz: " << endl;
    cout << "0, 1 o 2: "<< endl;
    cout << "Equipo: ";
    int equipo;
    cin >> equipo;
    cout << "ahora su posicion: ";
    int posicion;
    cin >> posicion;
    if((posicion < 0 || posicion > 3)||(equipo < 0 || equipo > 3)){
        cout << "Posicion incorrecta..." << endl;
    }else{
        cout << "Selecciono a "<< listado[equipo][posicion] << endl;
        cout << "Modifique el nombre por uno mejor: ";
        cin >> listado[equipo][posicion];
    }
    cout << "Ahora su lista quedo modificada asi:" << endl;
    for(int i = 0; i < 3; i++){
        cout << "Equipo " << i + 1 << endl;
        for(int j = 0; j < 3; j++){
            cout << listado[i][j] << ", " << endl;
        }
    }
}