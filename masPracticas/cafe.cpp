#include <iostream>
using namespace std;

void servir_taza(){
    cout << "Taza servida" << endl;
}
void hacer_cafe(){
    cout << "Cafe hecho" << endl;
}
void calentar_cafe(){
    int caliente = 0;
    while(caliente != 1){
        cout << "Esta caliente el cafe?" << endl;
        cout << "Indique 1 si es correcto o 2 para calentar" << endl;
        cin >> caliente;
        if(caliente != 1){
            cout << "calentando cafe..." << endl;
        }
    }
}
void endluzar(){
    int dulce = 0;
    while(dulce != 3){
        switch(dulce){
            case 1: cout << "agregando sugar..." << endl;
            break;
            case 2: cout << "agregando stevia..." << endl;
            break;
        }
        cout << "esta bien asi?" << endl;
        cout << "1. agregar azucar" << endl;
        cout << "2. agregar edulco" << endl;
        cout << "3. listo don asi esta bien" << endl;
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
    servir_taza();
    endluzar();
    cout << "Disfruta tu cafe" << endl;
}