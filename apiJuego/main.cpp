#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int limite_inferior, limite_superior, intentos_max; //El usuario seleccionará los rangos deseados
    cout <<"Este es un juego de adivinanzas. Debes adivinar el numero generado aleaotriamente. Tu indicaras entre que numeros \n";
    cout <<"se generara, cuanto mas rango mas dificil sera... \n";
    cout <<"Ingresa el numero para el limite inferior: \n";
    cin >> limite_inferior;
    cout <<"Ingresa el numero para el limite superior: \n";
    cin >> limite_superior;
    //validacion de los limites
    while(limite_inferior >= limite_superior){
      cout << "El limite inferior debe ser menor al limite superior, ingreselo denuevo" << endl;
      cout << "Ingresa el limite inferior: " << endl;
      cin >> limite_inferior;
      cout << "Ingrese limite superior: " << endl;
      cin >> limite_superior;
    }

    cout <<"Ingresa la cantidad de intentos que deseas tener para adivinar: \n";
    cin >> intentos_max;

    while(intentos_max <= 0){
      cout << "La cantidad de intentos debe ser mayor a 0!" << endl;
      cout << "Ingrese nuevamente los intentos maximos: " << endl;
      cin >> intentos_max;
    }

    srand(time(nullptr)); //Llamo a srand de la libreria

    int numero_aleatorio = limite_inferior + rand() % (limite_superior - limite_inferior +1); //Se genera el numero aleatorio teniendo en cuenta los limites del usuario
    int intento, i;
    bool adivinado = false;

    for(i = 0; i < intentos_max; ++i){ //un ciclo for con condicionales para ir restando la cantidad de intentos, que ademas le da pistas al usuario
        cout <<"Intento "<< (i + 1) << "/" << intentos_max << " Ingresa un numero para adivinar: ";
        cin >> intento;

        //validacion numero fuera de rango
        if(intento < limite_inferior || intento > limite_superior){
         cout << "El numero ingresado esta fuera de rango ("<< limite_inferior<<" - "<< limite_superior<<"). Ingrese nuevamente. \n";
         --i;
         continue;
        }

         if (intento < numero_aleatorio){
            cout << "El numero es mayor. Intentalo de nuevo! \n";
         } else if(intento > numero_aleatorio){
            cout << "El numero es menor. Vamos, tu puedes! \n";
         } else {
            cout <<"¡Felicidades! Has adivinado el numero! :D. \n";
            cout <<"Que dices, le subimos la dificultad?";
            adivinado = true;
            break;
         }
    }
    if(!adivinado){
        cout <<"GAME OVER - Has agotado todos los intentos posibles. ¿Quieres intentarlo de nuevo?";
        return 0;
    }

}