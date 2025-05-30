#include <iostream>
using namespace std;

/*int main(){
    int numeroSecreto = 3;
    int adivina;
    do{
        cout << "Adivina mi numero marrano" << endl;
        cin >> adivina;
    }while(adivina != numeroSecreto);
    cout << "AHA!! asi que lees mentes eeeee";
    return 0;
    #include <iostream>
using namespace std;
*/
int main()
{
    int num1;
    int potencia;
    int opcion;
    int suma = 0;
    do{
        cout << "Elevaremos a la potencia los numeros que ingrese: " << endl;
        cout << "Ingrese el numero 1: ";
        cin >> num1;
        cout << "Ingrese la potencia: ";
        cin >> potencia;
        int resultado = (num1 * num1) * potencia;
        cout << endl;
        cout << "1. Resultado: " << endl;
        cout << "2. si desea salir pulse '2'" << endl;
        cout << "Opcion" << endl;
        cin >> opcion;
        if(opcion == 1){
            cout << num1 << " elevado a la " << potencia << " es = " << resultado << endl;
            suma += resultado;
        }
    }while(opcion != 2);
    
    cout << "la suma de todas las potencias es = " << suma;
}
