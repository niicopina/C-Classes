#include <iostream>
using namespace std;

int main(){
    int vel_max = 100;
    int velocidad = 0;
    cout << "Su auto tiene una velocidad maxima de 100km/h" << endl;
    cout << "Acelera de a 20km/h, acelere el auto hasta su velocidad maxima: " << endl;
    int aceleracion;
    while(velocidad < vel_max){
        cin >> aceleracion;
        if(aceleracion == 20){
            velocidad += aceleracion;
            cout << "Velocidad actual: " << velocidad << "km/h" << endl;
        }else{
            cout << "debe acelerar de a 20km/h" << endl;
        }
    }
    cout << "Velocidad maxima alcanzada";
}