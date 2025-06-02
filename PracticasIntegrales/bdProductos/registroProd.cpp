#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAX_PROD = 10;

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
class Sweater : public Producto{
    void talle(){
        cout << "Seleccione el talle del sweater: " << endl;
        cout << "1. S" << endl;
        cout << "2. M" << endl;
        cout << "3. L" << endl;
        cout << "4. XL" << endl;
        cout << "Opcion: ";
        int opcion;
        cin >> opcion;
        switch(opcion){
            case 1: cout << "1. S" << endl; break;
            case 2: cout << "2. M" << endl; break;
            case 3: cout << "3. L" << endl; break;
            case 4: cout << "4. XL" << endl; break;
            default: cout << "invalido";
        }
    }
};
class Bolso : public Producto{
    void color(){
        cout << "Seleccione el color del bolso: " << endl;
        cout << "1. Cedro" << endl;
        cout << "2. Negro" << endl;
        cout << "3. Envejecido" << endl;
        cout << "Opcion: ";
        int opcion;
        cin >> opcion;
        switch(opcion){
            case 1: cout << "1. Cedro" << endl; break;
            case 2: cout << "2. Negro" << endl; break;
            case 3: cout << "3. Envejecido" << endl; break;
            default: cout << "invalido";
        }
    }
};

int main(){
    Producto* lista_productos[MAX_PROD];
    
}

/*
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
*/