// Problema: Mostrar el nombre completo de una persona usando string.

// - Uso del tipo string para manejar texto.
// - Concatenación de cadenas.

#include <iostream>
#include <string>  // Necesario para usar strings
using namespace std;

int main() {
    string nombre, apellido;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su apellido: ";
    cin >> apellido;

    cout << "Hola, " << nombre << " " << apellido << ". Bienvenido!" << endl;

    return 0;
}
