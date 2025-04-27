#include <iostream>
using namespace std;

/*int main(){
    string matriz[2][4] = 
    {
        {"Nombre: ", "Alfonsina ", "Apolo ", "Chace "} , 
        {"Raza: ", "NoRaza ", "Labrador ", "Manto Negro "}
    };
    for(int i=0; i < 2; i++){
        for(int j= 0; j < 4; j++){
            cout << matriz[i][j] << " - ";
        }
        cout << endl;
    }
}*/
int main(){
    string alumnos_notas[2][6] = 
    {
        {" Nombre: "," Nicolas ", " Adriana ", " Alfonsina ", " Ricky ", " Apolo "},
        {" Nota: ", "    7 ", "       8 ", "        6 ", "         4 ", "      3 "}
    };
    for(int i= 0; i < 2; i++){
        for(int j = 0; j < 6; j++){
            cout << alumnos_notas[i][j];
        }
        cout << endl;
    }
}