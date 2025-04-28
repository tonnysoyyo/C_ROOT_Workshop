/*
🎯 ¿Qué es la Programación Orientada a Objetos?

La POO es un paradigma de programación donde estructuramos el código en torno a objetos, que son instancias de clases. Las clases representan entidades con características (atributos) y comportamientos (métodos).

🧩 Conceptos clave de POO:

- Clase: Plantilla o molde que define un objeto.
- Objeto: Instancia concreta de una clase.
- Atributos: Variables que describen al objeto.
- Métodos: Funciones que realizan acciones sobre el objeto.
- Encapsulamiento: Proteger los datos internos de la clase.
- Constructores: Método especial que inicializa objetos.
- Herencia (mención básica por ahora).
*/

// Problema: Definir una clase que represente un Planeta.

// - Creamos una clase llamada Planeta con 3 atributos públicos.
// - Definimos un método que imprime los datos.
// - Creamos un objeto tierra y lo usamos.

#include <iostream>
#include <string>
using namespace std;

// Definimos la clase Planeta
class Planeta {
public:
    string nombre;
    double masa;       // En kilogramos
    double radio;      // En kilómetros

    // Método para mostrar información
    void mostrarInfo() {
        cout << "Planeta: " << nombre << endl;
        cout << "Masa: " << masa << " kg" << endl;
        cout << "Radio: " << radio << " km" << endl;
    }
};

int main() {
    Planeta tierra;  // Creamos un objeto de tipo Planeta

    // Asignamos valores a sus atributos
    tierra.nombre = "Tierra";
    tierra.masa = 5.972e24;
    tierra.radio = 6371;

    tierra.mostrarInfo();  // Llamamos al método

    return 0;
}
