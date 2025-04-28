/*
🚀 Mini Proyecto POO — Catálogo de Partículas (con Herencia)

🎯 Descripción del Proyecto:

Vamos a construir un Catálogo de Partículas usando POO, donde:

- Definimos una clase base llamada Particula.
- Creamos clases derivadas como: Fermion y Boson
- Cada clase tendrá atributos comunes (nombre, masa, carga) y específicos según su tipo.
- El usuario podrá: registrar partículas (de tipo Fermion o Boson) y mostrar la información de todas las partículas registradas.

🧩 Conceptos aplicados:

- Clases y Objetos.
- Herencia.
- Encapsulamiento.
- Constructores.
- Uso de arrays de objetos.
- Ciclos y condicionales para interacción con el usuario.

🎨 Explicación del Proyecto:

Clase Base Particula:

- Contiene atributos comunes: nombre, masa, carga.
- Método virtual mostrarInfo() que es redefinido por las clases hijas.
- Método puro tipo() para forzar que cada subclase defina su tipo.

Clases Derivadas:

- Fermion: Spin fijo de 0.5.
- Boson: Spin variable (puede ser 0, 1, etc.).

Uso de punteros a la clase base para almacenar objetos de diferentes tipos en un solo arreglo.
Polimorfismo básico: cuando llamamos mostrarInfo(), se ejecuta la versión correspondiente según el tipo real del objeto.
Gestión de memoria dinámica con new y delete.

🚀 ¿Cómo compilar y ejecutar este código?

g++ catalogo_particulas.cpp -o catalogo_particulas
./catalogo_particulas

✅ Salida esperada (Ejemplo de uso):

==== Catálogo de Partículas ====

Seleccione una opción:
1. Agregar Fermion
2. Agregar Boson
3. Mostrar Partículas Registradas
4. Salir
Opción: 1
Nombre del Fermion: Electron
Masa (MeV/c^2): 0.511
Carga (e): -1
Fermion agregado al catálogo.

Seleccione una opción:
3

=== Lista de Partículas ===
--- Fermion ---
Nombre: Electron
Masa: 0.511 MeV/c^2
Carga: -1 e
Spin: 0.5
*/

#include <iostream>
#include <string>
using namespace std;

// Clase base: Particula
class Particula {
protected:
    string nombre;
    double masa;   // En MeV/c^2
    double carga;  // En unidades de e

public:
    Particula(string n, double m, double c) : nombre(n), masa(m), carga(c) {}

    virtual void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Masa: " << masa << " MeV/c^2" << endl;
        cout << "Carga: " << carga << " e" << endl;
    }

    virtual string tipo() = 0;  // Método puro para definir el tipo
};

// Clase derivada: Fermion
class Fermion : public Particula {
private:
    double spin;  // Spin característico de fermiones

public:
    Fermion(string n, double m, double c) : Particula(n, m, c) {
        spin = 0.5;
    }

    void mostrarInfo() override {
        cout << "--- Fermion ---" << endl;
        Particula::mostrarInfo();
        cout << "Spin: " << spin << endl;
    }

    string tipo() override {
        return "Fermion";
    }
};

// Clase derivada: Boson
class Boson : public Particula {
private:
    double spin;

public:
    Boson(string n, double m, double c, double s) : Particula(n, m, c), spin(s) {}

    void mostrarInfo() override {
        cout << "--- Boson ---" << endl;
        Particula::mostrarInfo();
        cout << "Spin: " << spin << endl;
    }

    string tipo() override {
        return "Boson";
    }
};

int main() {
    const int MAX_PARTICULAS = 10;
    Particula* catalogo[MAX_PARTICULAS];  // Arreglo de punteros a Particula
    int contador = 0;

    int opcion;

    cout << "==== Catálogo de Partículas ====" << endl;

    while (true) {
        cout << "\nSeleccione una opción:" << endl;
        cout << "1. Agregar Fermion" << endl;
        cout << "2. Agregar Boson" << endl;
        cout << "3. Mostrar Partículas Registradas" << endl;
        cout << "4. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            if (contador >= MAX_PARTICULAS) {
                cout << "Catálogo lleno." << endl;
                continue;
            }

            string nombre;
            double masa, carga;

            cout << "Nombre del Fermion: ";
            cin >> nombre;
            cout << "Masa (MeV/c^2): ";
            cin >> masa;
            cout << "Carga (e): ";
            cin >> carga;

            catalogo[contador++] = new Fermion(nombre, masa, carga);
            cout << "Fermion agregado al catálogo." << endl;

        } else if (opcion == 2) {
            if (contador >= MAX_PARTICULAS) {
                cout << "Catálogo lleno." << endl;
                continue;
            }

            string nombre;
            double masa, carga, spin;

            cout << "Nombre del Boson: ";
            cin >> nombre;
            cout << "Masa (MeV/c^2): ";
            cin >> masa;
            cout << "Carga (e): ";
            cin >> carga;
            cout << "Spin del Boson (ej: 1 o 0): ";
            cin >> spin;

            catalogo[contador++] = new Boson(nombre, masa, carga, spin);
            cout << "Boson agregado al catálogo." << endl;

        } else if (opcion == 3) {
            if (contador == 0) {
                cout << "No hay partículas registradas." << endl;
                continue;
            }

            cout << "\n=== Lista de Partículas ===" << endl;
            for (int i = 0; i < contador; i++) {
                catalogo[i]->mostrarInfo();
                cout << endl;
            }

        } else if (opcion == 4) {
            cout << "Saliendo del catálogo. ¡Hasta luego!" << endl;
            break;

        } else {
            cout << "Opción inválida. Intente de nuevo." << endl;
        }
    }

    // Liberar memoria
    for (int i = 0; i < contador; i++) {
        delete catalogo[i];
    }

    return 0;
}
