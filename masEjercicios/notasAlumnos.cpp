#include <iostream>
using namespace std;

int main(){
    int cantidad_alumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad_alumnos;

    float* notas = new float[cantidad_alumnos];
    float suma = 0;
    float nota_max = 0;

    for(int i = 0; i < cantidad_alumnos; i++){
        cout << "Ingrese las notas: "<< endl;
        cin >> notas[i];
        suma += notas[i];
        if(notas[i] > nota_max){
            nota_max = notas[i];
        }
    }
    float promedio = (float)suma / cantidad_alumnos;

    cout << "Las notas ingresadas fueron: " << endl;
    for(int i = 0; i < cantidad_alumnos; i++){
        cout << notas[i] << " " << endl;
    }
    cout << "El promedio de las notas es = " << promedio << endl;
    cout << "La nota mas alta fue = " << nota_max;

}