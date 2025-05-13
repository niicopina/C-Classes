#include <iostream>
#include <string>
using namespace std;

int main(){
    const int cantidad_alumnos = 5;
    string alumnos[cantidad_alumnos];
    cout << "Ingrese el nombre de cada alumno: " << endl;
    for(int i = 0; i < cantidad_alumnos; i++){
        getline(cin, alumnos[i]);
    }
    cout << "El listado de alumnos queda asi: " << endl;
    for(int i = 0; i < cantidad_alumnos; i++){
        cout << i << "Nombre: " <<  alumnos[i] << endl;
    }
    int opcion;
    do{
        cout << "Desea modificar un alumno?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 1){
            cout << "Para modificarlo elija primero su posicion en la lista: ";
            int posicion;
            cin >> posicion;
            cin.ignore();
            if(posicion >= 0 && posicion < cantidad_alumnos){
                cout << "La posicion " << posicion << " corresponde al alumno: " << alumnos[posicion] << endl;
                cout << "Ingrese la modificacion: ";
                getline(cin, alumnos[posicion]);
            }else{
                cout << "Posicion invalida, intente de nuevo: ";
                cin >> posicion;
            }
            cout << "Se ha modificado el alumno" << endl;
            cout << "Desea hacer otra modificacion? ";
            cin >> opcion;
        }
    }while(opcion != 2);
    cout << "- Lista de alumnos -" << endl;
    for(int i = 0; i < cantidad_alumnos; i++){
        cout << i << " Nombre: " << alumnos[i] << endl;
    }
}