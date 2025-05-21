#include <iostream>
using namespace std;

int main(){
    cout << "indiquemos en que mes del año estamos" << endl;
    int opcion;
    cin >> opcion;
    switch(opcion){
        case 1: cout << "1. Enero";break;
        case 2: cout << "2. Febrero"; break;
        case 3: cout << "3. Marzo"; break;
        case 4: cout << "4. Abril"; break;
        case 5: cout << "5. Mayo"; break;
        case 6: cout << "6. Junio"; break;
        case 7: cout << "7. Julio"; break;
        case 8: cout << "8. agosto"; break;
        case 9: cout << "9. septiembre"; break;
        case 10: cout << "10. octubre"; break;
        case 11: cout << "11. noviembre"; break;
        case 12: cout << "12. diciembre"; break;
        default: cout << "mes invalido";
    }
    if(opcion == 5){
        cout << ". Correcto, estamos en el mes 5 (MAyo)" << endl;
    }else{
        cout << ". No estamos en ese mes querido, intenta de nuevo: ";
    }
    int year;
    cout << "indica en que year estamos: ";
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
        cout << "Es un year biciesto." << endl;
    }else{
        cout << "no es un year biciesto.";
    }
}