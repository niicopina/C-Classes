#include <iostream>
using namespace std;

class Mascotas{
    double peso;
    string nombre;
    string raza;

    public:
        void set_peso(int variable){
            peso = variable;
        }
        void set_nombre(string variable){
            nombre = variable;
        }
        void set_raza(string variable){
            raza = variable;
        }
        int get_peso(){
            return peso;
        }
        string get_nombre(){
            return nombre;
        }
        void mostrar(){
            cout << "Nombre: " << nombre << endl;
            cout << "Raza: " << raza << endl;
            cout << "Peso: " << peso << endl;
        }
};
int main(){
    string nombre;
    string raza;
    double peso;
    
    Mascotas miMascota;
    miMascota.set_nombre("Alfonsina");
    miMascota.set_raza("P.P");
    miMascota.set_peso(8.6);
    miMascota.mostrar();

    cout << "----------------------" << endl;

    Mascotas ramaMascota;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese la raza: ";
    cin >> raza;
    cout << "Ingrese su peso: ";
    cin >> peso;
    ramaMascota.set_nombre(nombre);
    ramaMascota.set_raza(raza);
    ramaMascota.set_peso(peso);
    ramaMascota.mostrar();
}