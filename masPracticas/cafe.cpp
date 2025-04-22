#include <iostream>
using namespace std;

void servir_cafe(){
    cout << "Le sirvo el cafecito" << endl;
}
void hacer_cafe(){
    cout << "le preparo el cafe entonces" << endl;
}
void calentar_cafe(){
    int calentar = 0;
    while(calentar != 1){
        cout << "Indique 1 si esta bien caliente o 2 si quiere mas calor" << endl;
        if(calentar != 1){
            cout << "Calentando mas" << endl;
        }
    }
}
void endulzar(){
    int dulce = 0;
    while(dulce != 3){
        switch(dulce){
            case 1: cout << "Agregando Azucar..." << endl;
            break;
            case 2: cout << "Agregando stevia..." << endl;
            break;
        }
        cout << "Esta bien? joyaa" << endl;
        cout << "1. Agregar Azucar" << endl;
        cout << "2. Agregar Stevia" << endl;
        cout << "3. Asi esta perfecto" << endl;
        cin >> dulce;
    }
}
int main(){
    bool cafe = true;
    if(!cafe){
        hacer_cafe();
    }else{
        calentar_cafe();
    }
    servir_cafe();
    endulzar();
    cout << "Disfrute su cafecitoo" << endl;
}