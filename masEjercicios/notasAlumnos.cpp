#include <iostream>
using namespace std;

int main(){
    /*int cantidad_alumnos;
    cout << "Ingrese la cantidad de alumnos que rindieron el examen: ";
    cin >> cantidad_alumnos;

    float* notas = new float [cantidad_alumnos];
    float suma = 0;
    float nota_max = 0;

    for(int i = 0; i < cantidad_alumnos; i++){
        cout << "Ingrese las notas de los alumnos: " << endl;
        cin >> notas[i];
        suma += notas[i];
        if(notas[i] > nota_max){
            nota_max = notas[i];
        }
    }
    float promedio = (float)suma / cantidad_alumnos;
    cout << "El promedio del curso fue de: " << promedio 
    << ". La nota mas alta fue: " << nota_max << endl;*/
    
    const int max_num = 6;
    int numeros[max_num];
    cout << "Ingrese 6 numeros enteros: " << endl;
    for(int i = 0; i < max_num; i++){
        cin >> numeros[i];
    }
    cout << "Ahora los ordenare de manera ascendente: " << endl;
    for(int i = 0; i < max_num - 1; i++){
        for(int j = 0; j < max_num - i - 1; j++){
            if(numeros[j] > numeros[j + 1]){
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    cout << "El orden es asi:" << endl;
    for(int i = 0; i < max_num; i++){
        cout << numeros[i] << " " << endl;
    }
}