#include <iostream>
#include <string>
#include <limits>

using namespace std;

// --- Prototipos de Funciones ---
float calcularPromedio(int cantidad);
string determinarEstado(float promedio);
string determinarCategoria(float promedio);
void mostrarResultados(string nombre, string curso, float promedio, string estado, string categoria);

int main() {
    string nombreEstudiante, curso;
    int cantidadNotas;

    cout << "Creador: Kevin Andres Rivas Velasquez" << endl;
    cout << "--------------------------------------" << endl;

    // Uso de getline para capturar nombres con espacios
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombreEstudiante);

    cout << "Ingrese el nombre del curso: ";
    getline(cin, curso);

    cout << "Cantidad de notas a ingresar: ";
    cin >> cantidadNotas;

    // Llamada a las funciones para procesar la lógica
    float promedio = calcularPromedio(cantidadNotas);
    string estado = determinarEstado(promedio);
    string categoria = determinarCategoria(promedio);

    // Procedimiento para mostrar la salida ordenada
    mostrarResultados(nombreEstudiante, curso, promedio, estado, categoria);

    return 0;
}

// Función que recibe notas y devuelve el promedio
float calcularPromedio(int cantidad) {
    float suma = 0, nota;
    for (int i = 1; i <= cantidad; i++) {
        cout << "  Ingrese nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    return (cantidad > 0) ? (suma / cantidad) : 0;
}

// Función que devuelve APROBADO o REPROBADO
string determinarEstado(float promedio) {
    if (promedio >= 61) {
        return "APROBADO";
    } else {
        return "REPROBADO";
    }
}

// Función extra para determinar la categoría académica
string determinarCategoria(float promedio) {
    if (promedio >= 85) return "EXCELENTE";
    if (promedio >= 70) return "BUENO";
    if (promedio >= 61) return "REGULAR";
    return "DEFICIENTE";
}

// Procedimiento (void) para mostrar la información final
void mostrarResultados(string nombre, string curso, float promedio, string estado, string categoria) {
    cout << "\n========================================" << endl;
    cout << "         REPORTE ACADEMICO             " << endl;
    cout << "========================================" << endl;
    cout << "Estudiante:     " << nombre << endl;
    cout << "Curso:          " << curso << endl;
    cout << "Promedio final: " << promedio << endl;
    cout << "Estado:         " << estado << endl;
    cout << "Categoria:      " << categoria << endl;
    cout << "========================================" << endl;
}
