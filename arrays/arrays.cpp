#include <iostream>
using namespace std;

int main(){
    string alumnos[] = {"Nicolas", "Adriana", "Gonzalo", "Daniela", "Felipe"};
    int notas[] = {5,6,7,3,8};
    cout << "Se anotaron 5 alumnos al curso: " << endl;
    for(int i=0; i<5; i++){
        cout << i << "- Nombre: " << alumnos[i] << endl;
    } 
    for(int i=0 ; i<5 ; i++){
        if(notas[i] <= 6){
            cout << " La nota de " << alumnos[i] <<" fue: "<< notas[i] << " , Desaprueba el examen"<< endl;
        } else{
            cout << " La nota de " << alumnos[i] << " fue: " << notas[i]<< " , Aprobado" << endl;
        }
    }
}