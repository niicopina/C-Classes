#include <iostream>
#include <string>
using namespace std;

int main(){
    int cantidad_alumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad_alumnos;

    float* notas_alumnos = new float[cantidad_alumnos];
    float suma = 0;
    float nota_maxima = 0;

    for(int i = 0; i < cantidad_alumnos; i++){
        cout << "Ingrese la nota del alumno" << i + 1 << ": ";
        cin >> notas_alumnos[i];
        suma += notas_alumnos[i];
        if(notas_alumnos[i] > nota_maxima){
            nota_maxima = notas_alumnos[i];
        }
    }
    cout << "Notas ingresadas: " << endl;
    for(int i = 0; i < cantidad_alumnos; i++){
        cout << notas_alumnos[i] << " " << endl;
    }
    float promedio = (float)suma / cantidad_alumnos;
    cout << "El promedio de las notas es: " << promedio << endl;
    cout << "La nota mas alta fue: " << nota_maxima << endl;

}