#include <iostream>
#include <vector>
using namespace std;

void promedio(){
    int cantidad;
    cout << "cuantos numeros desea en su array?: ";
    cin >> cantidad;
    int suma = 0;
    int numero;
    for(int i = 0; i < cantidad; i++){
        cout << "#" << i + 1 << " = ";
        cin >> numero;
        suma += numero;
    }
    float promedio = suma / (float)cantidad;
    cout << "el promedio es = " << promedio;
}

void invertirArray(){
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    vector<int> array(size); //dinamic array with the users given size
    for(int i = 0; i < size; i++){
        cout << "Enter the #" << i + 1 << " = ";
        cin >> array[i];
    }
    cout << "Inverse order of the array: " << endl;
    for(int i = size - 1; i >= 0; i--){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Enter the number you are searching for, we'll see if it's already in the array: ";
    int number;
    cin >> number;
    bool find = false;
    for(int i = 0; i < size; i++){
        if(number == array[i]){
            find = true;
            cout << "Here it is: "<< number << endl;
            break;
        }else{
            cout << "No matches..." << endl;
        } 
    }
}
void ordenarArray(){
    int cantidad;
    cout << "Enter the quantity of numers you want in the array: ";
    cin >> cantidad;
    vector<int> array(cantidad);
    for(int i = 0; i < cantidad; i++){
        cout << "Position #" << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Now we will arrange them in a decendent way: " << endl;
    for(int i = 0; i < cantidad - 1; i++){
        for(int j = 0; j < cantidad - i - 1; j++){
            if(array[j] > array[i] + 1){
                swap(array[j], array[j+1]);
            }
        }
    }
    for(int i = 0; i < cantidad; i++){
        cout << "Posicion: "<< i + 1 << " : " << array[i] << endl;
    }
}

int main(){
    //promedio();
    //invertirArray();
    ordenarArray();
}