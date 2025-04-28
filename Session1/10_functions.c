// Problema: Crear una función que determine si un número es par o impar.

// - Función esPar que retorna un valor booleano (true o false).
// - Uso del operador módulo % para verificar divisibilidad.

#include <iostream>
using namespace std;

// Función que devuelve true si es par, false si es impar
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (esPar(numero)) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    return 0;
}
