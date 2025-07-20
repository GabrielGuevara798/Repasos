#include <iostream>
using namespace std;

int main() {
    int N;
    double numero, suma = 0;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << "Ingresa el número " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    if (N > 0) {
        double promedio = suma / N;
        cout << "El promedio de los " << N << " números es: " << promedio << endl;
    } else {
        cout << "No se puede calcular el promedio de cero números." << endl;
    }

    return 0;
}
