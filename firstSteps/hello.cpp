#include <iostream>
using namespace std;
/*
int main(){
    cout <<"let's calculate the perimeter of a rectangle!" <<"\n";
    int l1 = 10, l2 = 30, l3= 10, l4 = 30;
    int perimeter = l1 + l2 + l3 + l4;
    cout <<"The perimeter is: " <<"\n";
    cout <<perimeter;
    return 0;
} 
#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cout <<"type the first num: ";
    cin >> x;
    cout <<"type the sec num: ";
    cin >> y;
    cout <<"now we are going to multiply it... and the result is = ";
    cout << x * y;
    return 0;
}*/

int main(){
    int edad;
    bool bigotes = true;
    cout << "ingrese su edad: " << endl;
    cin >> edad;
    if(edad < 18){
        cout << "Eres menor de edad, no puedes ingresar :(" << endl;
    } else if(edad >= 18 && bigotes){
        cout << "Adelante... pero antes... puedes hacer una cuenta para mi??" << endl;
    }
    int resultado = 0;
    cout << "¿Cuanto es 1203 + 1574?" << endl;
    cin >> resultado;
    if(resultado == 1203 + 1574){
        cout << "Vaya! Eres todo un matematico!" << endl;
    } else {
        cout << "Mmm, mejor compra una calculadora";
    }
    cout << "de acuerdo, ahora dime la clave secreta..." << endl;
    string password = "";
    cin >> password;
    if(password == "alojomora"){
        cout << "HA! Bienvenido al sistema, hechicero..." << endl;
    } else if(password != "alojomora"){
        cout << "no deberias estar aqui... Muggle!" << endl;
    }
    cout << "Ingresa a cual casa quieres dirigirte... 1 - Haffelpuff, 2 - Slytherin, 3 - Griffindor o 4 - Ravenclaw" << endl;
    int casa = 0;
    cin >> casa;
    switch(casa){
        case 1: cout << "Has elegido Haffelpuff, te crees muy listo eh";
        break;
        case 2: cout << "Has elegido Slytherin, te crees muy malo ehh";
        break;
        case 3: cout << "Has elegido al clasico Griffindor, te crees protagonista eehh";
        break;
        case 4: cout << "Has elegido Ravenclaw... quieres perfil bajo ehh";
        break;
        default: cout << "pusiste cualquiera pa...";
    }
    return 0;
}