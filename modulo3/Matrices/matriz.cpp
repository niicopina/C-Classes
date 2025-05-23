#include <iostream>
using namespace std;

int main(){
    const int alumnos = 3;
    const int notas = 3;

    string nombres[alumnos];
    int calificaciones[alumnos][notas];
    float promedios[alumnos];

    for(int i = 0; i < alumnos; i++){
        cout << "Alumno " << i + 1 << ": ";
        cin >> nombres[i];

        int suma = 0;

        for(int j = 0; j < notas; j++){
            cout << "Nota de " << nombres[i] << "- " 
                 << "Examen " << j + 1 << ": ";
            cin >> calificaciones[i][j];
            suma += calificaciones[i][j];
        }
        promedios[i] = suma / (float)notas;
    }
    cout << "Promedios: " << endl;
    for(int i = 0; i < alumnos; i++){
        cout << nombres[i] << ": " << promedios[i] << endl;
    }

    float mejorPromedio = promedios[0];
    string mejorAlumno = nombres[0];

    for(int i = 0; i < alumnos; i++){
        if(promedios[i] > mejorPromedio){
            mejorPromedio = promedios[i];
            mejorAlumno = nombres[i];
        }
    }
    cout << "El alumno con mejor promedio es "<< mejorAlumno
         << " con " << mejorPromedio << endl;
}
