#include <iostream>
using namespace std;

void suma_numeros(){
    int numero, suma = 0;
    cout << "ingrese un numero para hacer la suma: ";
    cin >> numero;
    for(int i = 0; i <= numero; i++){
        suma += i ;
    }
    cout << "la suma de los 1ros "<<numero<<"numeros es: "<<suma<<endl;
}

void mayor_numeros(){
    int mayor = 0;
    cout<<"ingrese 3 numeros a ver cual es el mayor: ";
    for(int i =0;i<3;i++){
        int numero;
        cin >> numero;
        if(numero > mayor){
            mayor = numero;
        }
    }
    cout<<"el numero mayor es: "<< mayor;
}

void par_impar(){
    int numero;
    cout<<"ingrese un numero a ver si es par o impar: ";
    cin >> numero;
    if(numero % 2 == 0){
        cout<<"el numero es par";
    }else{
        cout<<"el numero es impar";
    }
}
void positivos_negativos(){
    int numero;
    int positivo = 0, negativo = 0;
    cout<<"ingrese numero(0 para salir): ";
    cin >> numero;
    while(numero != 0){
        if(numero < 0){
            negativo++;
        }else if(numero>0){
            positivo++;
        }
        cout<<"ingrese otro numero (0 para salir): ";
    }
    cout<<"cant de positivos: "<<positivo<<". Cant negativos: "<<negativo<<endl;
}

void tabla_multi(){
    int numero = 0;
    int limite = 0;
    do{
        cout<<"ingresa un num para su tabla multi:";
        cin >> numero;
        if(numero != 0){
            do{
                cout<<"ingresa el limite: ";
                cin>>limite;
                if(limite <= 0){
                    cout<<"el limite debe ser mayor a 0: ";
                    cin>>limite;
                }
            }while(limite <= 0);
            for(int i = 0; i<limite; i++){
                cout<<numero<<" x "<<i<<" = "<< numero * i << endl;
            }
        }
    }while(numero != 0);
}

void promedio_numeros(){
    const int MAX = 100;
    int numeros[MAX];
    int cantidad;
    cout<<"ingrese la cantidad que desea promediar: ";
    cin>>cantidad;
    int suma = 0;
    for(int i =0;i<cantidad;i++){
        cout<<"ingrese el numero "<<i+1<<": ";
        cin>>numeros[i];
        suma += numeros[i];
    }
    float promedio = (float)suma / cantidad;
    cout<<"el promedio de los numeros es:. "<<promedio<<endl;
    cout<<"indique la posicion que desea ver: ";
    int posicion;
    cin>>posicion;
    if(posicion >= 0 && posicion < cantidad){
        cout<<"la posicion elegida es: "<<posicion<<"entonces: "<<numeros[posicion] <<endl;
        cout<<"ahora modifique el numero en la posicion elegida: ";
        cin>>numeros[posicion];
        for(int i =0; i<cantidad; i++){
            cout<<"posicion: "<<i<<": "<<numeros[i]<<endl;
        }
    }else{
        cout <<"posicion invalida..."<<endl;
        cin>>posicion;
    }
}

void conversor_temp(){
    int opcion;
    double temp, resultado;
    cout<<"Conversor de temperatura"<<endl;
    cout<<"1. de Celcius a Farenheit"<<endl;
    cout<<"2. de Farenheit a Celcius"<<endl;
    cout<<"seleccione una opcion: ";
    cin >> opcion;
    switch(opcion){
        case 1: cout<<"ingrese la temp en Celcius: ";
        cin >> temp;
        resultado = (temp * 9.0 / 5.0)+32;
        cout<<"La temp en Celcius es: "<<resultado<<"°F"<<endl;
        break;
        case 2: cout<<"ingrese la temp en Farenheit: ";
        cin>>temp;
        resultado = (temp - 32)*5.0/9.0;
        cout<<"La temp en Farenheit es: "<<resultado<<"°C"<<endl;
        break;
        default: cout<<"no validop"<< endl;
    }
}

void metodos_pago(){
    double precio;
    int metodoDePago;
    double total;
    cout<<"ingrese el precio del producto: $";
    cin>>precio;
    cout<<"Seleccione metodo de pago: "<< endl;
    cout<<"1. Transferencia (10% de descuento)"<<endl;
    cout<<"2. Debito (precio regular)"<<endl;
    cout<<"3. Credito (5% de recargo)"<<endl;
    cout<<"Opcion: ";
    cin>>metodoDePago;
    switch(metodoDePago){
        case 1:
            total = precio * 0.90;
            cout<<"Con transferencia el total es: $"<<total<<endl;
            break;
        case 2:
            total = precio;
            cout<<"Con debito el total es: $"<<total<<endl;
            break;
        case 3:
            total = precio * 1.05;
            cout<<"Con credito el total es: $"<<total<<endl;
            break;
        default: cout<<"Opcion invalida"<<endl;
    }
}

int main(){
    metodos_pago();
}