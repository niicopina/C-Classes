#include <iostream>
#include <string>
using namespace std;

const int MAX_ALUMNOS = 10;

class Alumnos{
    string nombre;
    int dni;
    
    public: 
    void set_nombre(string variable){
        nombre = variable;
    }
    void set_dni(int variable){
        dni = variable;
    }
    string get_nombre(){
        return nombre;
    }
    int get_dni(){
        return dni;
    }
    void mostrar(){
        cout << "Nombre: " << nombre << endl;
        cout << "DNI: " << dni << endl;
    }
};
int main(){
    Alumnos listaAlumnos[MAX_ALUMNOS];
    int cantidad = 0;
    string nombre;
    int dni;
    char opcion;

    do{
        if(cantidad >= MAX_ALUMNOS){
            cout << "Se alcanzo el limite de alumnos.";
            break;
        }
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese DNI: ";
        cin >> dni;

        listaAlumnos[cantidad].set_nombre(nombre);
        listaAlumnos[cantidad].set_dni(dni);
        cantidad++;

        cout << "Desea agregar otro alumno? ( s / n )";
        cin >> opcion;
    }while(opcion == 's' || opcion == 's');

    cout << " << Lista de alumnos ingresada >> " << endl;
    for(int i = 0; i < cantidad; i++){
        cout << "Alumno " << i + 1 << ": " << endl;
        listaAlumnos[i].mostrar();
        cout << endl;
    }
}