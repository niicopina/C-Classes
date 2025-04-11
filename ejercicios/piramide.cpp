#include <iostream>
using namespace std;

int main(){
    /*int altura = 5;
    for(int fila = 1; fila <= altura; ++fila){
        for (int espacio = 0; espacio <= altura - fila; ++espacio){
            cout << " ";
            }
        for(int ast = 1; ast <= (2* fila - 1); ++ast){
            cout << "*";
        }
        cout << endl;
    }*/
    cout << "Bien ahora intentaremos hacer una piramide invertida" << endl;
    int height = 5;
    for(int row = height; row >= 1; --row){
        for(int space = 1; space <= height - row; ++space){
            cout << " ";
        }
        for(int aste = 1; aste <= (2 * row -1); ++aste){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}