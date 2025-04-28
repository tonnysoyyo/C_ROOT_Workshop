// Problema: Calcular la suma de los primeros n números naturales.

// - Uso de una variable acumuladora (suma).
// - Introducción al operador +=.

#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un número n para sumar desde 1 hasta n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += i;  // Equivalente a suma = suma + i
    }

    cout << "La suma de los primeros " << n << " números naturales es: " << suma << endl;

    return 0;
}
