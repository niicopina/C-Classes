#include <iostream>
using namespace std;

int main(){
    int vida_enemigo = 100;
    int fuerza_ataque = 0;
    int ataque;
    cout << "Su enemigo tiene 100 de vida, tus ataques se suman de a 20" << endl;
    while(fuerza_ataque < vida_enemigo){
        cout << "Ataca! " << endl;
        cin >> ataque;
        if(ataque == 20){
            fuerza_ataque += ataque;
            cout << "Ataque combinado de " << fuerza_ataque << " golpes fuertes" << endl;
        }else{
            cout << "debe golpear con 20 de fuerza a la vez";
        }
    }
    cout << "Enemigo derrotado";
}