/*
Ejercicio 1: Conteo hasta 10
Escribe un programa en C++ que use un ciclo for para imprimir los números del 1 al 10 en pantalla.
🔹 Pistas:

Usa un for que vaya de 1 a 10.

Dentro del for, usa cout para imprimir cada número.

¡Dale, probalo! Cuando lo termines, me pasás tu código y te doy otro desafío. 🚀
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
int main(){
    for (int i=1; i <= 10; ++i){
        cout << i << endl;
    }
    return 0;
}
*/

/*
🔹 Ejercicio 2: Números pares
Escribe un programa que imprima solo los números pares entre 1 y 20.
Usá un ciclo for y una condición if para decidir si un número es par.

🔍 Pistas:
Un número es par si numero % 2 == 0 (el resto de dividirlo por 2 es cero).

Usá el ciclo for para recorrer del 1 al 20.

Dentro del for, usá un if para verificar si el número actual (i) es par.

Si es par, lo imprimís con cout.

int main(){
    for (int i = 0; i <= 20; ++i){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
}

🔸 Ejercicio 3: Suma de impares
Escribe un programa que:

Recorra los números del 1 al 50

Sume solo los impares

Al final, muestre la suma total

int main(){
    int suma = 0;
    for (int i = 1; i <=50; ++i){
        if(i % 2 != 0){          //un numero es impar si el resto de dividirlo por 2 es 1, si el num no es divisible por 2 entonces es impar
            suma += i;
        }
    }
    cout << "La suma de los numeros impares del 1 al 50 es: " << suma << endl;
    return 0;
}

🔸 Ejercicio 4: Adivina cuál suma más
Vas a sumar los números pares del 1 al 100

Vas a sumar los números impares del 1 al 100

Y vas a decir cuál suma es mayor, o si son iguales
🧠 Tip: usá dos variables, por ejemplo suma_pares y suma_impares.
Y al final comparalas con if, else if, else.

int main(){
    int suma_pares = 0;
    int suma_impares = 0;
    for (int i = 1; i <= 100; ++i){
        if(i % 2 != 0){
            suma_impares += i;
        } else if (i % 2 == 0){
            suma_pares += i;
        }
    }
    cout << "La suma de los numeros impares es: " << suma_impares << endl;
    cout << "La suma de los numeros pares es: " << suma_pares << endl;
    if(suma_impares < suma_pares){
        cout << "Los pares suman mas" << endl;
    } else if(suma_impares > suma_pares){
        cout << "Los impares suman mas" << endl;
    } else {
        cout << "La suma da igual" << endl;
    }
    return 0;
}

🔸 Ejercicio 5: ¡FizzBuzz! (Clásico de entrevistas)
Recorre los números del 1 al 100 e imprime:

"Fizz" si el número es múltiplo de 3

"Buzz" si es múltiplo de 5

"FizzBuzz" si es múltiplo de ambos

Si no es múltiplo de ninguno, imprimí el número

🔧 Pistas:
Usá i % 3 == 0 y i % 5 == 0

Primero verificá si es múltiplo de ambos

Después verificá individualmente 3 o 5

¿Te animás? Este es de los más famosos del mundo 😄

int main(){
    for(int i = 1; i <= 100; ++i){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
        } else if(i % 3 == 0){
            cout << "Fizz" << endl;
        } else if (i % 5 == 0){
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}

int main(){
    for(int fila = 0; fila < 5; ++fila){
        for(int col = 0; col <= fila; ++col){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
    
int main(){
    for(int fila = 5; fila >= 1; --fila){
        for(int col= 1; col <= fila; ++col){
            cout << "*";
        }
        cout << endl;
    }
}
    */

int main(){
    for(int i = 1; i<=10; ++i){
        int multiplicador = 3;
        int resultado = multiplicador * i;
        cout << i << " * " << multiplicador << " = " << resultado << endl;
    }
    return 0;
}