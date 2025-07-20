#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    long long resultado = 1;

    cout << "Cálculo de Potencia" << endl;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente: ";
    cin >> exponente;

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;

    return 0;
}
