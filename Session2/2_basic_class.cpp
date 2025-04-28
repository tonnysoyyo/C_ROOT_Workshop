// Problema: Definir una clase para una Partícula en física.

#include <iostream>
#include <string>
using namespace std;

class Particula {
public:
    string nombre;
    double masa;  // en MeV/c^2
    double carga; // en unidades de e

    void describir() {
        cout << "Partícula: " << nombre << endl;
        cout << "Masa: " << masa << " MeV/c^2" << endl;
        cout << "Carga: " << carga << " e" << endl;
    }
};

int main() {
    Particula electron;
    electron.nombre = "Electrón";
    electron.masa = 0.511;
    electron.carga = -1;

    electron.describir();

    return 0;
}
