// Problema: calcular el área de un rectángulo con valores dados por el usuario.

// - Declaración de variables float.
// - Uso de cin para capturar datos del usuario.

#include <iostream>
using namespace std;

int main() {
    float base, altura;  // Declaramos dos variables de tipo decimal

    cout << "Ingrese la base del rectángulo (m): ";
    cin >> base;

    cout << "Ingrese la altura del rectángulo (m): ";
    cin >> altura;

    float area = base * altura;  // Calculamos el área

    cout << "El área del rectángulo es: " << area << " metros cuadrados." << endl;

    return 0;
}
