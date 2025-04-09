#include <iostream>
using namespace std;

int main(){
    int altura = 5;
    for(int fila = 1; fila <= altura; ++fila){
        for (int espacio = 0; espacio <= altura - fila; ++espacio){
            cout << " ";
            }
        for(int ast = 1; ast <= (2* fila - 1); ++ast){
            cout << "*";
        }
        cout << endl;
    }
    
}