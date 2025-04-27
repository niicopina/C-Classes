#include <iostream>
using namespace std;

int main(){
    string alumnos[] = {"Nico", "pepe", "juanete", "solange", "ricardo"};
    int notas[] = {9, 5, 6, 2, 8};
    cout << "Los alumnos que participan de esta clase son: " << endl;
    for(int i=0; i<5; i++){
        cout << "Nombre: " << alumnos[i] << endl;
    }
    for(int i= 0; i < 5 ; i++){
        cout << "La nota de " << alumnos[i] << " fue un: " << notas[i] << endl;
        if(notas[i] < 6){
            cout << " Esta desaprobado" << endl;
        }else{
            cout << " Curso aprobado" << endl;
        }
    }

}