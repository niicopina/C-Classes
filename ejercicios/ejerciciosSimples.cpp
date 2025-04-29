#include <iostream>
using namespace std;

//Ejercicios para practicar C++

void par_impar(){ //determinar si el num ingresado es par o impar
    cout << "Ingrese un numero, determinaremos si es par o impar: " << endl;
    int numero;
    cin >> numero;
    if(numero % 2 == 0){
        cout << "el numero es par";
    } else{
        cout << "el numero es impar";
    }
}
void numero_mayor(){//determinar cual de los num ingresados es el mayor
    int mayor = 0; //ponemos un valor inicial
    cout << "Ingrese 3 numeros, a ver cual es el mayor: " << endl;
    for(int i = 0; i < 3; i++){//al poner i < 3 definimos la cantidad de numeros que puede ingresar el usuario
        int num;
        cin >> num;
        if(num > mayor){//comparamos si el num ingresado es mayor a 0
            mayor = num;//de ser asi, se asigna el num a mayor
        }               //luego al ingresaro otro compara si es mayor al previo, de ser asi se asigna ese valor a mayor
    }
    cout << "El numero mayor es: " << mayor;
}
void numerosPositivos_negativos(){//contar cuántos números positivos y negativos se ingresaron.
    int num;
    int positivos = 0;
    int negativos = 0;
    cout << "Ingrese un numero(0 para terminar): ";
    cin >> num;
    while(num != 0){
        if(num < 0){
            negativos++;
        }else{
            positivos++;
        }
        cout << "Ingrese otro numero para continuar(0 para terminar): ";
        cin >> num; 
    }
    cout << "Cantidad de num positivos ingresados: " << positivos << endl;
    cout << "Cantidad de num negativos ingresados: " << negativos << endl;
}

void tabla_multiplicar(){
    int numero = 0;
    int limite = 0;
    do{
        cout << "ingresa un numero para ver su tabla de multiplicar (0 para salir): ";
        cin >> numero;
        if(numero != 0){
            do{
                cout << "ahora ingresa hasta que numero desea multiplicar: ";
                cin >> limite;
                if(limite <= 0){
                    cout << "el limite debe ser mayor a 0. " << endl;
                }
            }while(limite <= 0);
            
            for(int i = 1; i <= limite; i++){
                cout << numero << " x " << i << " = " << numero * i << endl;
            } 
        }
    }while(numero != 0);
}
void promedio_numeros(){
    const int max = 100;
    int numeros[max];
    int cantidad;
    cout << "ingrese cuantos numeros desee para sacar su promedio: ";
    cin >> cantidad;
    int suma = 0;
    for(int i = 0; i<cantidad; i++){
        cout << "ingrese el numero" << i +1 <<": ";
        cin >> numeros[i];
        suma += numeros[i];
    } 
    float promedio = (float)suma / cantidad;
    cout << "el promedio de los numeros es: "<< promedio << endl;

    cout << "indique que posicion del arreglo desea ver: ";
    int posicion;
    cin >> posicion;
    if(posicion >= 0 && posicion < cantidad){
        cout << "El numero en la posicion elegida " << posicion << " es: " << numeros[posicion] << endl;
        cout << "ahora modifique el numero en la posicion seleccionada: " << endl;
        cin >> numeros[posicion];
        cout << "El nuevo arreglo quedo asi: " << endl;
        for(int i= 0; i < cantidad; i++){
            cout << "posicion: "<< i << ": "<< numeros[i] << endl;
        }
    }else{
        cout << "posicion invalida" << endl;
    }
}

int main(){
    //par_impar();
    //numero_mayor();
    //numerosPositivos_negativos();
    //tabla_multiplicar();
    promedio_numeros();
}