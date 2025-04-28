/*
¿Qué es una función?

Una función es un bloque de código reutilizable que realiza una tarea específica. Nos ayuda a evitar repetir código y mejora la organización del programa.

Estructura Básica

tipo_de_retorno nombre_funcion(parámetros) {
    // Código de la función
    return valor;  // Si aplica
}

- tipo_de_retorno: El tipo de dato que devuelve la función (int, float, void, etc.).
- nombre_funcion: El nombre que le damos.
- parámetros: Datos que recibe la función para trabajar.
- Si la función no devuelve nada, se usa void.

Puntos clave sobre funciones:

- Puedes declarar funciones antes del main, o solo declarar su prototipo arriba y definirlas después.
- Las funciones pueden no retornar nada (void).
- Se pueden reutilizar en cualquier parte del código.
*/

// Problema: Crear una función que calcule el área de un círculo dado su radio.

// - Definimos una función llamada calcularAreaCirculo que recibe un float y retorna un float.
// - Uso de la librería <cmath> para obtener π (M_PI) y elevar al cuadrado.
// - Llamamos la función desde main para hacer el cálculo.

#include <iostream>
#include <cmath>  // Para usar M_PI y pow
using namespace std;

// Definimos la función que calcula el área
float calcularAreaCirculo(float radio) {
    return M_PI * pow(radio, 2);  // Fórmula: π * r^2
}

int main() {
    float radio;

    cout << "Ingrese el radio del círculo (m): ";
    cin >> radio;

    float area = calcularAreaCirculo(radio);

    cout << "El área del círculo es: " << area << " metros cuadrados." << endl;

    return 0;
}
