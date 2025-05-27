#include <iostream>
using namespace std;

class Mascota {
    public: 
    string nombre;
    string raza;
    int edad;
    int vida;
    int energia;
    
    void set_nombre(string variable){
        nombre = variable;
    }
    void set_raza(string variable){
        raza = variable;
    }
    void set_edad(int variable){
        edad = variable;
    }
    void caminar(){
        if(energia >= 10){
            energia -= 10;
            cout << "Ha caminado, energia restante: " << energia << endl;
        }else{
            energia = 0;
            cout << nombre << " esta muy cansado para seguir y se desmayo" << endl;
        }
    }
    void mostrar_datos(){
        cout << "Nombre: " << nombre << endl;
        cout << "Raza: " << raza << endl;
        cout << "Edad: " << edad << endl;
        cout << "Vida: " << vida << endl;
        cout << "Energia: " << energia << endl;
    }
};
class Dragon : public Mascota{
    public:
    Dragon(){
        vida = 10000;
        energia = 1500;
        set_raza("Dragon");
    }
};
class Warewolf : public Mascota{
    public:
    Warewolf(){
        vida = 1000;
        energia = 600;
        set_raza("Warewolf");
    }
};
class Vampire : public Mascota{
    public:
    Vampire(){
        vida = 1300;
        energia = 400;
        set_raza("Vampire");
    }
};
int main(){
    int opcion;
    Mascota* miMascota = nullptr;

    cout << "Elegi tu mascota: " << endl;
    cout << "1. Dragon" << endl;
    cout << "2. Warewolf" << endl;
    cout << "3. Vampire" << endl;
    cin >> opcion;
    switch(opcion){
        case 1: miMascota = new Dragon(); break;
        case 2: miMascota = new Warewolf(); break;
        case 3: miMascota = new Vampire(); break;
        default: cout << "Opcion incorrecta...";
    }
    string nombre;
    int edad;
    cout << "Como se llama tu mascota? " << endl;
    cin >> nombre;
    cout << "Que edad tiene?" << endl;
    cin >> edad;

    miMascota->set_nombre(nombre);
    miMascota->set_edad(edad);

    cout << "Asi que esta es tu mascota!" << endl;

    miMascota->mostrar_datos();

    int accion;
    do{
        cout << "Que quieres hacer?" << endl;
        cout << "1. Caminar (-10 energia)" << endl;
        cout << "2. Mostrar estado" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> accion;
        switch(accion){
            case 1: miMascota->caminar(); break;
            case 2: miMascota->mostrar_datos(); break;
            case 3: cout << "Fin del juego"; break;
            default: cout << "Opcion invalida" << endl;
        }
        if(miMascota->energia == 0){
            cout << miMascota->nombre << " se quedo sin energia, game over" << endl;
            break;
        }
    }while(accion != 3);
}