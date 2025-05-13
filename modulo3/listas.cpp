#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> milista = {10, 9, 8, 4};
    auto ultimo = milista.end();
    milista.insert(ultimo, 20);
    for(int numero : milista){
        cout << numero << endl;
    }
}