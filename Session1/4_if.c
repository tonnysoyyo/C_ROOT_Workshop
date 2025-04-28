// Problema: Sistema que determina si la temperatura ingresada indica fiebre.

// - Uso de if-else if-else para múltiples condiciones.
// - Comparaciones con números flotantes.

#include <iostream>
using namespace std;

int main() {
    float temperatura;

    cout << "Ingrese su temperatura corporal (°C): ";
    cin >> temperatura;

    if (temperatura >= 38.0) {
        cout << "Alerta: Usted tiene fiebre." << endl;
    } else if (temperatura >= 36.0 && temperatura < 38.0) {
        cout << "Su temperatura es normal." << endl;
    } else {
        cout << "Temperatura baja, consulte a su médico." << endl;
    }

    return 0;
}
