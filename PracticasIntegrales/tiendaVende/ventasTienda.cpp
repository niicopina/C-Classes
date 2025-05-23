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
    }


}