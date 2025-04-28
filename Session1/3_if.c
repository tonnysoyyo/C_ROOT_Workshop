// Problema: Un programa que le pide al usuario su edad y le dice si puede entrar a ver una película para mayores de 18.

// - Uso de cin y cout para interacción básica.
// - Condicional simple para tomar decisiones según la edad.

#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    // Evaluamos si puede entrar o no
    if (edad >= 18) {
        cout << "Puede entrar a ver la película." << endl;
    } else {
        cout << "Lo siento, no tiene la edad suficiente." << endl;
    }

    return 0;
}
