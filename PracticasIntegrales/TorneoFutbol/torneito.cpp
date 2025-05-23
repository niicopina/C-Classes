#include <iostream>
using namespace std;

int main(){
    const int equipos = 3;
    const int partidos = 3;

    string equipo[equipos];
    int goles[equipos][partidos];

    float promedios[equipos];

    for(int i = 0; i < equipos; i++){
        cout << "Equipo " << i+1 << ": ";
        cin >> equipo[i];
        int suma = 0;
        for(int j = 0; j < partidos; j++){
            cout << "Goles del equipo " << equipo[i]
                 << " - Partido "<< j+1 << " = ";
            cin >> goles[i][j];
            suma += goles[i][j];
        }
        promedios[i] = suma / (float)partidos;
    }
    cout << endl;
    cout << "Promedio de goles" << endl;
    for(int i = 0; i < equipos; i++){
        cout << equipo[i] << ": " << promedios[i] << endl;
    }
    float mejorPromedio = promedios[0];
    string mejorEquipo = equipo[0];
    for(int i = 0; i < equipos; i++){
        if(promedios[i] > mejorPromedio){
            mejorPromedio = promedios[i];
            mejorEquipo = equipo[i];
        }
    }
}