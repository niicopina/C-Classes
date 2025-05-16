#include <iostream>
#include <string>
using namespace std;

int main(){
    const int MAX_PROD = 100;
    int cantidad_productos;
    cout << "Cuantos productos desea ingresar?" << endl;
    cin >> cantidad_productos;
    if(cantidad_productos <= 0 || cantidad_productos > MAX_PROD){
        cout << "Ingrese una cantidad mayor a 0 y menor a 100: ";
        cin >> cantidad_productos;
    }

    string nombres[MAX_PROD];
    float precios[MAX_PROD];
    float cant_vendidas[MAX_PROD];

    for(int i = 0; i < cantidad_productos; i++){
        cout << "Producto: " << i + 1 << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, nombres[i]);
        cout << "Precio: ";
        cin >> precios[i];
        if(precios[i] <= 0){
            cout << "El precio debe ser mayor a 0 no?";
            cin >> precios[i];
        }
        cout << "Cantidad vendida: ";
        cin >> cant_vendidas[i];
        if(cant_vendidas[i] <= 0){
            cout << "Algo se tuvo que haber vendido no?";
            cin >> cant_vendidas[i];
        }
    }
    cout << "Antes de continuar revisa la lista: " << endl;
    for(int i = 0; i < cantidad_productos; i++){
        cout << "Producto " << i+1 << endl;
        cout << "Nombre: " << nombres[i]
             << " | Precio: $" << precios[i]
             << " | ud. vendidas: " << cant_vendidas[i]
             << endl;
    }
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
                     << cantidad_productos << "):";
                cin >> posicion;
                posicion--;
            }while(posicion < 0 || posicion >= cantidad_productos);
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
    cout << endl;
    cout << " ---Registro de productos---" << endl;
    float total_recaudado = 0;
    int indiceMasVendido = 0;
    for(int i = 0; i < cantidad_productos; i++){
        float total = precios[i] * cant_vendidas[i];
        total_recaudado += total;

        cout << "Producto: " << i + 1 << endl;
        cout << "Nombre: " << nombres[i] 
             << " - $" << precios[i]
             << " -- Vendidos = " 
             << cant_vendidas[i] 
             << "| Total recaudado = $" << total
             << endl;
        if(cant_vendidas[i] > cant_vendidas[indiceMasVendido]){
            indiceMasVendido = i;
        }
    }
    cout << " -- Estadisticas -- " << endl;
    cout << "Total recaudado en la semana: $" << total_recaudado << endl;
    cout << "Producto mas vendido: " << nombres[indiceMasVendido]
         << ", con " << cant_vendidas[indiceMasVendido] << " unidades."
         << endl;
}