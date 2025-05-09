#include <iostream>
#include <string>
using namespace std;

int main(){
    const int CANT_ALUMNOS  = 5;
    string alumnos[CANT_ALUMNOS];
    cout << "Ingrese el nombre de cada alumno: " << endl;
    for(int i = 0; i < CANT_ALUMNOS; i++){
        getline(cin,alumnos[i]);
    }
    cout << "El listado de alumnos queda asi: " << endl;
    for(int i = 0; i < CANT_ALUMNOS; i++){
        cout << alumnos[i] << endl;
    }
    cout << "Si desea modificar un alumno elija su posicion en la lista: " << endl;
    int posicion;
    cin >> posicion;
    cin.ignore();

    if(posicion >= 0 && posicion < CANT_ALUMNOS){
        cout << "La posicion elegida es " << posicion << " - Nombre: " << alumnos[posicion] << endl;
        cout << "Ingrese la modificacion -> ";
        getline(cin, alumnos[posicion]); 
    }else{
        cout << "Posicion invalida, elija entre 0 y 4..." << endl;
        cin >> posicion;
    }
    cout << "La lista modificada queda asi: " << endl;
    for(int i = 0; i < CANT_ALUMNOS; i++){
        cout << "Posicion: " << i +1 << " - Nombre: " << alumnos[i] << endl;
    }
}