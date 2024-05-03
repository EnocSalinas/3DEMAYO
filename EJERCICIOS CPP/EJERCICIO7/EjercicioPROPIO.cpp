#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;
    
    vector<int> vector1(longitud);
    vector<int> vector2(longitud);
    vector<int> resultado(longitud);
    
    cout << "Ingrese los valores del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Ingrese el valor " << i+1 << ": ";
        cin >> vector1[i];
    }
    
    cout << "Ingrese los valores del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Ingrese el valor " << i+1 << ": ";
        cin >> vector2[i];
    }
    
    for (int i = 0; i < longitud; ++i) {
        resultado[i] = vector1[i] + vector2[i];
    }
    
    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << resultado[i] << " ";
    }
    cout << endl;
    
    return 0;
}
