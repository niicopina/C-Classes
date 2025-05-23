#include <iostream>
#include <string>
using namespace std;

//Constante Global
const int MAX_PROD = 10;

//Funciones
void cargarProductos(string nombres[], float precios[], float cant_vendidas[], int cantidad){
    for(int i = 0; i < cantidad; i++){
        cout << "Producto " << i + 1 << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, nombres[i]);
        do{
            cout << "Precio: $";
            cin >> precios[i];
        }while(precios[i] <= 0);
        do{
            cout << "Cantidad vendida: ";
            cin >> cant_vendidas[i];
        }while(cant_vendidas[i] <= 0);
    }
}
void mostrarLista(string nombres[], float precios[], float cant_vendidas[], int cantidad){
    cout << "Antes de continuar revisa la lista: " << endl;
    for(int i = 0; i < cantidad; i++){
        cout << "Producto " << i+1 << endl;
        cout << "Nombre: " << nombres[i]
             << " | Precio: $" << precios[i]
             << " | ud. vendidas: " << cant_vendidas[i]
             << endl;
    }
}
void modificarProducto(string nombres[], float precios[], float cant_vendidas[], int cantidad){
    int opcion;
    do{
        cout << "Desea modificar un producto?" << endl;
        cout << "1. SI" << endl;
        cout << "2. NO" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        if(opcion == 1){
            int posicion;
            do{
                cout << "Para modificarlo ingrese su posicion en la lista (1 a" 
                     << cantidad << "):";
                cin >> posicion;
                posicion--;
            }while(posicion < 0 || posicion >= cantidad);
            cout << "La posicion " << posicion + 1
                 << " corresponde al producto: "
                 << nombres[posicion] << endl;
            cout << "Ingrese la modificacion:" << endl;
            cout << "Nombre: ";
            cin.ignore();
            getline(cin, nombres[posicion]);
            cout << "Precio: $";
            cin >> precios[posicion];
            cout << "Unidades vendidas: ";
            cin >> cant_vendidas[posicion];
        }
    }while(opcion != 2);
}

float recaudacionSemanal(const float precios[], const float cant_vendidas[], int cantidad){
    float total = 0;
    for(int i = 0; i < cantidad; i++){
        total += precios[i] * cant_vendidas[i];
    }
    return total;
}

int mostrarProductos(const string nombres[], const float precios[], const float cant_vendidas[], int cantidad){
    int indiceMasVendido = 0;
    cout << "--Registro de Productos--" << endl;
    for(int i = 0; i < cantidad; i++){
        float total = precios[i] * cant_vendidas[i];
        cout << "Producto: " << i + 1 << endl;
        cout << "Nombre: " << nombres[i] 
             << " - $" << precios[i]
             << " -- Vendidos = " 
             << cant_vendidas[i] 
             << "| Total recaudado por producto = $" << total
             << endl;
        if(cant_vendidas[i] > cant_vendidas[indiceMasVendido]){
            indiceMasVendido = i;
        }
    }
    return indiceMasVendido;
}

void mostrarEstadisticas(float total, const string nombres[], const float cant_vendidas[], int indice){
    cout << " -- Estadisticas -- " << endl;
    cout << "Total recaudado en la semana: $" << total << endl;
    cout << "Producto mas vendido: " << nombres[indice]
         << ", con " << cant_vendidas[indice] << " unidades."
         << endl;
}

int main(){
    int cantidad_productos;
    cout << "Cuantos productos desea ingresar?" << endl;
    cin >> cantidad_productos;
    if(cantidad_productos <= 0 || cantidad_productos > MAX_PROD){
        cout << "Ingrese una cantidad mayor a 0 y menor a 10: ";
        cin >> cantidad_productos;
    }

    string nombres[MAX_PROD];
    float precios[MAX_PROD];
    float cant_vendidas[MAX_PROD];

    cargarProductos(nombres, precios, cant_vendidas, cantidad_productos);
    mostrarLista(nombres, precios, cant_vendidas, cantidad_productos);
    modificarProducto(nombres, precios, cant_vendidas, cantidad_productos);

    int indiceMasVendido = mostrarProductos(nombres, precios, cant_vendidas, cantidad_productos);
    float total_recaudado = recaudacionSemanal(precios, cant_vendidas, cantidad_productos);
    
    mostrarEstadisticas(total_recaudado, nombres, cant_vendidas, indiceMasVendido);
}