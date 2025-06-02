#include <iostream>
#include <string>
using namespace std;

class Producto{
    public: 
    string nombre;
    int precio;
    int cantidad;
    void set_nombre(string n){
        nombre = n;
    }
    void set_precio(int p){
        precio = p;
    }
    void set_cantidad(int c){
        cantidad = c;
    }
    string get_nombre(){
        return nombre;
    }
    int precio(){
        return precio;
    }
    int cantidad(){
        return cantidad;
    }
    void mostrar(){
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
    }
};
class Poncho : public Producto{
    void estilo(){
        cout << "Seleccione el estilo del poncho: " << endl;
        cout << "1. Federal" << endl;
        cout << "2. Escudo" << endl;
        cout << "3. Independencia" << endl;
        cout << "4. Cordobes" << endl;
        cout << "Opcion: ";
        int opcion;
        cin >> opcion;
        switch(opcion){
            case 1: cout << "1. Federal" << endl; break;
            case 2: cout << "2. Escudo" << endl; break;
            case 3: cout << "3. Independencia" << endl; break;
            case 4: cout << "4. Cordobes" << endl; break;
            default: cout << "invalido";
        }
    }
};