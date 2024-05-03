#include <iostream>

using namespace std;

int main() {
    float suma = 0, promedio;
    int contador;
    float notas[10];

    // Ingreso de notas
    cout << "Ingrese las notas de los 10 estudiantes:" << endl;
    for (contador = 0; contador < 10; contador++) {
        cout << "Nota del estudiante " << contador + 1 << ": ";
        cin >> notas[contador];
        suma += notas[contador];
    }

    // Cálculo del promedio
    promedio = suma / 10;

    // Salida del promedio
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}
