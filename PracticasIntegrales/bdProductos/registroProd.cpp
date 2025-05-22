#include <iostream>
#include <string>
using namespace std;

const int MAX_PROD = 3;

class Productos {
    string nombre;
    float precio;
    int cantidad;
    public: 
    void set_nombre(string variable){
        nombre = variable;
    }
    void set_precio(float variable){
        precio = variable;
    }
    void set_cantidad(int variable){
        cantidad = variable;
    }
    string get_nombre(){
        return nombre;
    }
    float get_precio(){
        return precio;
    }
    int get_cantidad(){
        return cantidad;
    }
    void mostrar(){
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
    }
};
int main(){
    Productos lista_productos[MAX_PROD];
    int cantidad = 0;
    string nombre;
    float precio;
    int cantidad_prod;
    char opcion;
    do{
        if(cantidad >= MAX_PROD){
            cout << "se alcanzo la cantidad maxima" << endl;
            break;
        }
        cout << "Ingrese el Producto: ";
        cin >> nombre;
        cout << "Precio: $";
        cin >> precio;
        cout << "Cantidad: ";
        cin >> cantidad_prod;

        lista_productos[cantidad].set_nombre(nombre);
        lista_productos[cantidad].set_precio(precio);
        lista_productos[cantidad].set_cantidad(cantidad_prod);
        cantidad++;

        cout << "Agrega otro producto? s/n - ";
        cin >> opcion;
    }while(opcion == 's' || opcion == 'S');

    cout << endl;
    cout << "Lista de productos ingresados" << endl;
    
    for(int i = 0; i < cantidad; i++){
        cout << "Producto " << i + 1 << ": " << endl;
        lista_productos[i].mostrar();
        cout << endl;
    }
}