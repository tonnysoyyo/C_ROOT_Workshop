// Problema: Crear un constructor para inicializar automáticamente un Planeta.

// - Uso de constructores para evitar asignaciones manuales.
// - Cuando se crea el objeto, ya viene inicializado.

class Planeta {
    public:
        string nombre;
        double masa;
        double radio;
    
        // Constructor
        Planeta(string n, double m, double r) {
            nombre = n;
            masa = m;
            radio = r;
        }
    
        void mostrarInfo() {
            cout << "Planeta: " << nombre << ", Masa: " << masa << " kg, Radio: " << radio << " km" << endl;
        }
    };
    
    int main() {
        Planeta marte("Marte", 6.417e23, 3389);
        marte.mostrarInfo();
    
        return 0;
    }
    