#include <iostream>

using namespace std;

int main() {
    int cantidad_alumnos = 8;
    int aprobados = 0;
    int reprobados = 0;
    float suma_notas = 0;

    for (int i = 1; i <= cantidad_alumnos; ++i) {
        float nota;
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        
        suma_notas += nota;
        if (nota >= 6.0) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    float promedio_general = suma_notas / cantidad_alumnos;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio_general << endl;

    return 0;
}
