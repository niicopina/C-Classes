#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    /* 
    list<int> milista = {10, 9, 8, 4};
    auto ultimo = milista.end(); // auto es una posicion en la memoria
    milista.insert(ultimo, 20);
    for(int numero : milista){
        cout << numero << endl;
    }
    */
    vector<int> mivector = {5, 1};
    cout << "cantidad de elementos " << mivector.size() << endl;
    cout << mivector[1] << endl;
    mivector.push_back(22);
    mivector.insert(mivector.begin(), 10);
    
    for(int i = 0; i < mivector.size(); i++){
        cout << mivector[i] << endl;
    }
}