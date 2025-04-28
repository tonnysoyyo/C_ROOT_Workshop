// Problema: Juego sencillo: Adivina el número secreto.

// - Uso del ciclo infinito while (true) y la instrucción break.

#include <iostream>
using namespace std;

int main() {
    int secreto = 7;
    int intento;

    cout << "Adivina el número secreto entre 1 y 10: ";

    while (true) {
        cin >> intento;
        if (intento == secreto) {
            cout << "¡Correcto! Has adivinado el número." << endl;
            break;  // Salimos del ciclo
        } else {
            cout << "Incorrecto. Intenta de nuevo: ";
        }
    }

    return 0;
}
