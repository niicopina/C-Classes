#include <iostream>
#include <string>
using namespace std;

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
    string nombre;
    int dni;

    Alumnos alumno1;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    alumno1.set_nombre(nombre);
    cout << "Ingrese DNI: ";
    cin >> dni;
    alumno1.set_dni(dni);
    cout << "La informacion del alumno ingresada es: " << endl;
    alumno1.mostrar();

}