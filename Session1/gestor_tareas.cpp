/*
🚀 Proyecto Integrador — Sesión 1: C++ Básico

🎯 Problema: Gestor de Tareas Simple.

El programa permitirá al usuario:

- Agregar tareas con una descripción.
- Ver la lista de tareas pendientes.
- Marcar tareas como completadas.
- Salir del programa.

✅ Conceptos aplicados: Variables y tipos de datos.

- Condicionales (if, else).
- Ciclos (while, for).
- Funciones.
- Entrada y salida estándar (cin, cout).
- Arreglos básicos (listas fijas para almacenar las tareas).

🎨 Explicación del Proyecto:

- Usamos un arreglo de strings para almacenar las tareas (limitado a 10 por simplicidad).
- Aplicamos un menú interactivo con un ciclo while infinito controlado con break.
- Las opciones del menú se gestionan con condicionales if-else.
- Creamos 4 funciones: mostrarMenu(), agregarTarea(), verTareas() y completarTarea()
- Aplicamos manipulación básica de arreglos al eliminar tareas.
- Uso de cin.ignore() y getline() para leer entradas con espacios.

🚀 ¿Cómo compilar y ejecutar este código?

g++ gestor_tareas.cpp -o gestor_tareas
./gestor_tareas
*/

#include <iostream>
#include <string>
using namespace std;

// Definimos un máximo de tareas que se pueden almacenar
const int MAX_TAREAS = 10;

// Declaramos las funciones
void mostrarMenu();
void agregarTarea(string tareas[], int &contador);
void verTareas(string tareas[], int contador);
void completarTarea(string tareas[], int &contador);

int main() {
    string tareas[MAX_TAREAS];  // Arreglo para almacenar tareas
    int contador = 0;           // Lleva la cuenta de tareas activas
    int opcion;

    cout << "==== Bienvenido al Gestor de Tareas ====" << endl;

    while (true) {
        mostrarMenu();
        cin >> opcion;

        if (opcion == 1) {
            agregarTarea(tareas, contador);
        } else if (opcion == 2) {
            verTareas(tareas, contador);
        } else if (opcion == 3) {
            completarTarea(tareas, contador);
        } else if (opcion == 4) {
            cout << "Gracias por usar el Gestor de Tareas. ¡Hasta luego!" << endl;
            break;
        } else {
            cout << "Opción inválida. Intente de nuevo." << endl;
        }
    }

    return 0;
}

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "\nSeleccione una opción:" << endl;
    cout << "1. Agregar nueva tarea" << endl;
    cout << "2. Ver tareas pendientes" << endl;
    cout << "3. Completar una tarea" << endl;
    cout << "4. Salir" << endl;
    cout << "Opción: ";
}

// Función para agregar una tarea al arreglo
void agregarTarea(string tareas[], int &contador) {
    if (contador >= MAX_TAREAS) {
        cout << "¡Has alcanzado el límite de tareas!" << endl;
        return;
    }

    cout << "Ingrese la descripción de la nueva tarea: ";
    cin.ignore();  // Limpiar el buffer
    getline(cin, tareas[contador]);  // Permite leer espacios en la descripción
    contador++;

    cout << "Tarea agregada exitosamente." << endl;
}

// Función para mostrar las tareas pendientes
void verTareas(string tareas[], int contador) {
    if (contador == 0) {
        cout << "No tienes tareas pendientes." << endl;
        return;
    }

    cout << "==== Lista de Tareas Pendientes ====" << endl;
    for (int i = 0; i < contador; i++) {
        cout << i + 1 << ". " << tareas[i] << endl;
    }
}

// Función para marcar una tarea como completada
void completarTarea(string tareas[], int &contador) {
    if (contador == 0) {
        cout << "No hay tareas para completar." << endl;
        return;
    }

    int numero;
    verTareas(tareas, contador);
    cout << "Ingrese el número de la tarea que desea completar: ";
    cin >> numero;

    if (numero < 1 || numero > contador) {
        cout << "Número inválido." << endl;
        return;
    }

    // Eliminamos la tarea desplazando el resto
    for (int i = numero - 1; i < contador - 1; i++) {
        tareas[i] = tareas[i + 1];
    }

    contador--;
    cout << "Tarea completada y eliminada de la lista." << endl;
}
