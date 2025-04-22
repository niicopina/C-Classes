#include <iostream>
using namespace std;

void calentar_agua(){
    int calentar = 0;
    while(calentar != 1){
        cout << "calentamos el agua o asi esta bien?" << endl;
        cout << "Indique 1 si esta bien o 2 si quiere el agua mas caliente: " << endl;
        cin >> calentar;
        if(calentar != 1){
            cout << "Calentando el agua, espereme tantito..." << endl;
        }
    }
}
void elegir_yerba(){
    int yerba = 0;
    cout << "Elijamos la yerba dale?" << endl;
    cout << "1 = Amanda, 2 = Playadito, 3 = Rosamonte" << endl;
    cin >> yerba;
    switch (yerba){
    case 1: cout << "Amanda" << endl;
        break;
    case 2: cout << "Playadito" << endl;
        break;
    case 3: cout << "Rosamonte" << endl;
        break;
    }
}
void endulzar(){
    int dulce = 0;
    while (dulce != 4){
        switch(dulce){
            case 1: cout << "Agregar miel" << endl;
            break;
            case 2: cout << "Agregar azucar" << endl;
            break;
            case 3: cout << "Agregar stevia" << endl;
            break;
        }
        cout << "Quiere endluzarlo un poquito?" << endl;
        cout << "1. agregar miel" << endl;
        cout << "2. agregar azucar" << endl;
        cout << "3. agregar stevia" << endl;
        cout << "4. asi esta bien" << endl;
        cin >> dulce;
    }
    cout << "Listo! El mate como te gusta!" << endl;
}
void cebar_mate(){
    cout << "Cebe ese matienso a ver que tul" << endl;
}
int main(){
    cout << "Vamo a preparar un rico mate que te parece?" << endl;
    calentar_agua();
    elegir_yerba();
    endulzar();
    cebar_mate();
}