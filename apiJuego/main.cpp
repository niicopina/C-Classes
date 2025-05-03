#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_NUMEROS = 100;

bool numeroIngresado(const int numeros[], int numero, int size){
   for(int i = 0; i < size; i++){
      if(numeros[i] == numero){
         return true;
      }
   }
   return false;
}

void mostrarNumeroIngresado(const int numeros[], int size){
   cout << "El numero ingresado fue: ";
   for(int i = 0; i < size; i++){
      cout << numeros[i] << ", ";
   }
}

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
    int numeros_ingresados[MAX_NUMEROS];
    int numeros_ingresados_size = 0;

    //Bulce adivinanza
    for(i = 0; i < intentos_max; ++i){ 
        cout <<"Intento "<< (i + 1) << "/" << intentos_max << " Ingresa un numero para adivinar: ";
        cin >> intento;

        //validacion numero fuera de rango
        if(intento < limite_inferior || intento > limite_superior){
         cout << "El numero ingresado esta fuera de rango ("<< limite_inferior<<" - "<< limite_superior<<"). Ingrese nuevamente. \n";
         --i;
         continue;
        }
        //verificamos duplicados
        if(numeroIngresado(numeros_ingresados, intento, numeros_ingresados_size)){
         cout << "Ese numero ya fue ingresado" << endl;
         --i;
         continue;
        }
        //incrementamos el numero de intentos
        numeros_ingresados[numeros_ingresados_size++] = intento;
        mostrarNumeroIngresado(numeros_ingresados, numeros_ingresados_size); //muestra los numeros ingresados

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
        cout <<"GAME OVER - Has agotado todos los intentos posibles. El numero secreto era: " << numero_aleatorio <<" Quieres intentarlo de nuevo?";
        mostrarNumeroIngresado(numeros_ingresados, numeros_ingresados_size);
    }
    return 0;
}