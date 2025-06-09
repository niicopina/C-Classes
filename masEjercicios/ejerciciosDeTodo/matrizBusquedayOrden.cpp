#include <iostream>
using namespace std;


int main(){
    const int ROW = 4;
    const int COL = 2;

    //int codigo[ROW];
    int matriz[ROW][COL]; 

    cout << "Ingrese el codigo de producto y luego su precio" << endl;
    for(int i = 0; i < ROW; i++){
        cout << "Producto #" << i+1 << endl;
        cout << "Codigo: ";
        cin >> matriz[i][0];
        cout << "Precio: $";
        cin >> matriz[i][1]; 
    }
    cout << endl;
    cout << "CODIGO\tPRECIO" << endl;
    for(int i = 0; i< ROW; i++){
        for(int j = 0; j < COL; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}