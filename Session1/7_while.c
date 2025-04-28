// Problema: Contar cuánto dinero ahorra una persona hasta llegar a su meta.

// - El ciclo continúa hasta que se alcanza la meta.
// - Buen ejemplo de condición dinámica.

#include <iostream>
using namespace std;

int main() {
    float ahorro = 0, deposito;
    float meta;

    cout << "¿Cuál es tu meta de ahorro? $";
    cin >> meta;

    while (ahorro < meta) {
        cout << "Ingrese cuánto desea depositar: $";
        cin >> deposito;
        ahorro += deposito;
        cout << "Ahorro actual: $" << ahorro << endl;
    }

    cout << "¡Felicidades! Alcanzaste tu meta de ahorro." << endl;

    return 0;
}
