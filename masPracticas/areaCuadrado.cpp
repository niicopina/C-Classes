#include <iostream>
using namespace std;

//Void es un procedimiento. Necesita estar guardado en memoria antes de main para poder usarlo en ella
void calcularAreaCuadrado(int cateto){
    int resultado;
    resultado = cateto * cateto;
    cout << "El area es: "<< resultado << endl;
}

int main(){
    calcularAreaCuadrado(4);
}