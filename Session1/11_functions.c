// Problema: Crear una función que imprima un saludo personalizado (sin devolver nada).

// - La función saludar solo muestra un mensaje en pantalla.
// - No tiene return porque es de tipo void.

#include <iostream>
using namespace std;

// Función tipo void: solo ejecuta una acción, no retorna valor
void saludar(string nombre) {
    cout << "¡Hola, " << nombre << "! Bienvenido a la clase de C++." << endl;
}

int main() {
    string nombre;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    saludar(nombre);  // Llamamos a la función

    return 0;
}
