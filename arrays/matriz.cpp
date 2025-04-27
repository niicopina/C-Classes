#include <iostream>
using namespace std;

int main(){
    string matriz[2][3] = 
    {
        {"Alfonsina ", "Apolo ", "Chace "} , 
        {"NoRaza ", "Labrador ", "Manto Negro "}
    };
    for(int i=0; i < 2; i++){
        for(int j= 0; j < 3; j++){
            cout << matriz[i][j] << " - ";
        }
        cout << endl;
    }
}