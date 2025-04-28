// Problema: Proteger los datos internos de una clase de Estrella.

// - Encapsulamiento: el atributo luminosidad es privado.
// - Solo podemos modificarlo con métodos públicos set y get.
// - Protege la integridad de los datos.

class Estrella {
    private:
        double luminosidad;  // En Watts
    
    public:
        void setLuminosidad(double L) {
            if (L > 0) {
                luminosidad = L;
            } else {
                cout << "La luminosidad debe ser positiva." << endl;
            }
        }
    
        double getLuminosidad() {
            return luminosidad;
        }
    };
    
    int main() {
        Estrella sol;
        sol.setLuminosidad(3.828e26);  // Valor en Watts
    
        cout << "La luminosidad del Sol es: " << sol.getLuminosidad() << " W" << endl;
    
        return 0;
    }
    