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
    void cazar(){
        if(energia >= 150){
            energia -= 150;
            cout << nombre << " ha cazado, Que bestia! Energia restante: "
                 << energia << endl;
        }else{
            cout << nombre << " no tiene suficiente energia para cazar" << endl;
        }
    }
    virtual void descansar(){
        cout << nombre << " esta descansando un poco..." << endl;
        energia += 300;
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
    void descansar() override{
        cout << nombre << ", duerme en su cueva... +400 energia" << endl;
        energia += 400;
        if(energia > 1500) energia = 1500;
    }
};
class Warewolf : public Mascota{
    public:
    Warewolf(){
        vida = 1000;
        energia = 600;
        set_raza("Warewolf");
    }
    void descansar() override{
        cout << nombre << " , duerme en el bosque... +200 energia" << endl;
        energia += 200;
        if(energia > 600) energia = 600;
    }
};
class Vampire : public Mascota{
    public:
    Vampire(){
        vida = 1300;
        energia = 500;
        set_raza("Vampire");
    }
    void descansar() override{
        cout << nombre << " , duerme en su castillo... +200 energia" << endl;
        energia += 200;
        if(energia > 500) energia = 500;
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
        cout << "2. Cazar (-150 energia)" << endl;
        cout << "3. Descansar" << endl;
        cout << "4. Mostrar estado" << endl;
        cout << "5. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> accion;
        switch(accion){
            case 1: miMascota->caminar(); break;
            case 2: miMascota->cazar(); break;
            case 3: miMascota->descansar(); break;
            case 4: miMascota->mostrar_datos(); break;
            case 5: cout << "Salir"; break;
            default: cout << "Opcion invalida" << endl;
        }
        if(miMascota->energia == 0){
            cout << miMascota->nombre << " se quedo sin energia, game over" << endl;
            break;
        }
    }while(accion != 5);
}