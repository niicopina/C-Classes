#include <iostream>
using namespace std;

class Mascotas{
    public: 
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
class Gatos : public Mascotas{
    public:
    void maullar(){
        cout << "Meeaaauuu" << endl;
    }
    void responderSaludo(){
        cout << "Hola, soy "<< this -> get_nombre() << endl;
    }
};
class Perros : public Mascotas{
    public: 
    void ladrar(){
        cout << "Woof Woof!" << endl;
    }
    void saludarGato(Gatos variable){
        cout << "Hola " << ", soy "<< this -> get_nombre() << endl;
        variable.responderSaludo();
    }
};

int main(){
    string nombre;
    string raza;
    double peso;
    
    Perros miMascota;
    miMascota.set_nombre("Alfonsina");
    miMascota.set_raza("P.P");
    miMascota.set_peso(8.6);
    miMascota.mostrar();
    miMascota.ladrar(); // metodo exclusivo de clase Perro

    cout << "----------------------" << endl;

    Perros ramaMascota;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese la peso: ";
    cin >> peso;
    cout << "Ingrese su raza: ";
    cin >> raza;
    ramaMascota.set_nombre(nombre);
    ramaMascota.set_peso(peso);
    ramaMascota.set_raza(raza);
    cout << endl;
    cout << "La mascota de Rama:" << endl;
    ramaMascota.mostrar();
    ramaMascota.ladrar();

    cout << endl;

    Gatos almenGatos;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese la raza";
    cin >> raza;
    cout << "Ingrese el peso: ";
    cin >> raza;
    almenGatos.set_nombre(nombre);
    almenGatos.set_raza(raza);
    almenGatos.set_peso(peso);
    cout << endl;
    cout << "La mascota de Almen: " << endl;
    almenGatos.mostrar();
    almenGatos.maullar();
    miMascota.saludarGato(almenGatos);
}