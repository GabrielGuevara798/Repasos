#include <iostream>
#include <cmath> // Para abs()
using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    numero = abs(numero); // Asegura que el número sea positivo

    // Contar cuántos dígitos tiene el número
    int temp = numero;
    int cantidad_digitos = 0;
    for (; temp > 0; temp /= 10) {
        cantidad_digitos++;
    }

    // Sumar los dígitos usando un for
    for (int i = 0; i < cantidad_digitos; i++) {
        suma += numero % 10;
        numero /= 10;
    }

    cout << "La suma de los digitos es: " << suma << endl;

    return 0;
}