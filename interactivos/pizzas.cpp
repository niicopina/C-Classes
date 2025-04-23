#include <iostream>
using namespace std;

//Juego interactivo para hacer un pedido de pipzzasz

string tamano_pizza = "";
string ingredientes_pizza = "";
string estilo_pizza = "";

void elegir_tamano(){
    int size = 0;
    cout << "Elige el tamano de la pizza: 1. Chico, 2. Grande, 3. Familiar" << endl;
    cin >> size;
    switch(size){
        case 1: tamano_pizza = "1. Pizza Chica";
        break;
        case 2: tamano_pizza = "2. Pizza Grande";
        break;
        case 3: tamano_pizza = "3. Pizza Familiar";
        break;
        default: tamano_pizza = "Tamaño desconocido";
    }
}
void agregar_ingredientes(){
    cout << "Elija los ingredientes que quiere en su Pizza" << endl;
    int ingredientes = -1;
    while (ingredientes != 0){
        cout << "Desea agregar mas ingredientes?" << endl;
        cout << "1. Agregar extra 4 quesos" << endl;
        cout << "2. Agregar tomate" << endl;
        cout << "3. Agregar Morrones" << endl;
        cout << "4. Agregar Jamon" << endl;
        cout << "5. Agregar Rucula y cherrys" << endl;
        cout << "0. Ya esta bien" << endl;
        cout << "Ingrese su opcion: " <<  endl;
        cin >> ingredientes;

        switch(ingredientes){
            case 1: ingredientes_pizza += "Agregar extra 4 quesos"; 
            break;
            case 2: ingredientes_pizza += "Agregar tomate";
            break;
            case 3: ingredientes_pizza += "Agregar Morrones";
            break;
            case 4: ingredientes_pizza += "Agregar Jamon";
            break;
            case 5: ingredientes_pizza += "Agregar Rucula y cherrys";
            break;
            case 0: ingredientes_pizza += "Ingredientes Listos!";
            break;
            default: cout << "Opcion no valida" << endl;
        }
        
    }
    cout << "Muy bien! Asi va a quedar riquisima" << endl;
}
void elegir_estilo(){
    int estilo = 0;
    cout << "Como prefiere la pizza: al molde o a la piedra?" << endl;
    cout << "Elja 1 si es al molde o 2 si es a la piedra" << endl;
    cin >> estilo;
    switch(estilo){
        case 1: estilo_pizza = "Pizza al Molde";
        break;
        case 2: estilo_pizza = "Pizza a la Piedra";
        break;
        default: estilo_pizza = "Estilo desconocido...";
    }
    cout << "Perfecto, gran eleccion" << endl;
}
void confirmar_pedido(){
    cout << "Resumen del pedido: " << endl;
    cout << "Tamano: " << tamano_pizza << endl;
    cout << "Ingredientes: " << ingredientes_pizza<< endl;
    cout << "Estilo: " << estilo_pizza << endl;
    cout << "Muy bien, ese es su pedido. comenzamos su preparacion dale?" << endl;
}

int main(){
    cout << "Bienvenidos a la Pizzeria NicolaoNicolai! Pase, haga su pedido y disfrute" << endl;
    elegir_tamano();
    agregar_ingredientes();
    elegir_estilo();
    confirmar_pedido();
    return 0;
}