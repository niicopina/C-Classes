#include <iostream>
using namespace std;

void suma_numeros(){
    int suma = 0;
    cout << "indique hasta que numero desea la suma: ";
    int numero;
    cin >>numero;
    for(int i = 0; i < numero; i++){
        suma += i;
    }
    cout << "la suma hasta ese "<< numero << "es: "<<suma;
}
void mayorDe3(){
    int mayor = 0;
    cout << "ingrese 3 numeros a ver cual es el mayor";
    for(int i = 0; i < 3; i++){
        int numero;
        cin >> numero;
        if(numero > mayor){
            mayor = numero;
        }
    }
    cout << "el numero mayor es: "<< mayor;
}

void par_impar(){
    int numero;
    cout << "ingrese un numnero: ";
    cin >> numero;
    if(numero % 2 == 0){
        cout << "el numero es par" << endl;
    }else{
        cout << "el numero es impar"<< endl;
    }
}

void positivos_negativos(){
  int numero;
  int positivo = 0, negativo = 0;
  cout << "ingrese numeros: ";
  cin >> numero;
  while(numero != 0){
    if(numero<0){
        negativo++;
    }else if(numero>0){
        positivo++;
    }
    cout << "ingrese otro numero: ";
  }
  cout << "la cantidad de + es "<<positivo<<" la cant de - es"<<negativo << endl;
}

void tabla_multiplicar(){
    int numero = 0;
    int limite = 0;
    do{
        cout << "ingrese el numero: ";
        cin >> numero;
        if(numero != 0){
            do{
                cout << "ingrese el limite";
                cin >> limite;
                if(limite <= 0){
                    cout <<"el limtie debe ser mayor";
                    cin >> limite;
                }
            }while(limite <= 0);
            for(int i = 1; i < limite; i++){
                cout<<numero<<" x "<<i<<"="<<numero * i<<endl;
            }
        }
    }while(numero != 0);
}

void promedio_numeros(){
    const int MAX = 100;
    int numeros[MAX];
    int cantidad;
    int suma;
    cout << "ingrese la cantidad de numeros que desee en el arreglo: ";
    cin >> cantidad;
    for(int i = 0; i < cantidad; i++){
        cout << "agregue los numeros ahora: ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    float promedio = (float)suma / cantidad;
    cout << "el promedio es: "<< promedio;
    cout << "indique la posicion del arreglo para modificarlo: ";
    int posicion;
    cin >> posicion;
    if(posicion >= 0 && posicion < cantidad){
        cout << "la posicion elegida tiene asignado el numero: "<< numeros[posicion] << endl;
        cout << "ahora modifique ese numero: ";
        cin >> numeros[posicion];
        for(int i = 0; i < cantidad; i++){
            cout << "Posicion: "<<i << numeros[i] << endl;
        }
    }else{
        cout << "posicion invalida: ";
        cin >> posicion;
    }
}

int main(){
    //suma_numeros();
    //par_impar();
    tabla_multiplicar();
    //promedio_numeros();
}