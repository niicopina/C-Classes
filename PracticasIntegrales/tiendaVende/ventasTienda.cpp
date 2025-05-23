#include <iostream>
using namespace std;

int main(){
    const int productos = 3;
    const int diasVenta = 4;
    string producto[productos];
    int ud_vendidas[productos][diasVenta];

    int total[productos];

    for(int i = 0; i < productos; i++){
        cout << "Producto " << i+1 << ": ";
        cin >> producto[i];
        int suma = 0;
        for(int j = 0; j < diasVenta; j++){
            cout << "Ud vendidas el dia "
                 << j+1 << " = ";
            cin >> ud_vendidas[i][j];
            suma += ud_vendidas[i][j];
        }
        total[i] = suma;
    }
    cout << endl;
    cout << "Total vendido " << endl;
    for(int i = 0; i < productos; i++){
        cout << producto[i] << " = " << total[i] << endl;
    }
    int totalMayorProducto = total[0];
    string productoMasVendido = producto[0];
    for(int i = 0; i < productos; i++){
        if(total[i] > totalMayorProducto){
            totalMayorProducto = total[i];
            productoMasVendido = producto[i];
        }
    }
    cout << "El producto mas vendido fue " << productoMasVendido
         << " con " << totalMayorProducto << " ud. vendidas" << endl;

}