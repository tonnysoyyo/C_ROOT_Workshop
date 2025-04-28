// Problema: Mostrar la tabla de multiplicar de un número.

// - Declaramos un ciclo que va de 1 a 10.
// - Ideal para practicar multiplicación y entender iteraciones.

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número para ver su tabla de multiplicar: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
