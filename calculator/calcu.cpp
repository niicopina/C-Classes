// My first calculator in C++ :)
#include <iostream>
#include <string>
using namespace std;

int main(){
    int firstNum, secNum;
    char operation;
    cout <<"Enter the first Number: "<<"\n";
    cin >> firstNum;
    cout <<"Enter the operation symbol (+, -, *, /)"<<"\n";
    cin >> operation;
    cout <<"Enter the second Number: "<<"\n";
    cin >> secNum;

    if (operation == '+'){
        cout << firstNum <<" + "<< secNum <<" = "<< firstNum + secNum << endl;
    } else if (operation == '-'){
        cout << firstNum <<" - "<< secNum <<" = "<< firstNum - secNum << endl;
    } else if (operation == '*'){
        cout << firstNum <<" * "<< secNum <<" = "<< firstNum * secNum << endl;
    } else if (operation == '/'){
        if(secNum != 0){
            cout << firstNum <<" / "<< secNum <<" = "<< firstNum / secNum << endl;
        } else {
            cout << "Error! Divided by 0?!?!"<< endl;
        }
    }
    return 0;
}