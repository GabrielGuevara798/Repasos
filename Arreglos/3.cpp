#include <iostream>
using namespace std;

int main()
{
    int fila, num[fila];
    double promedio, suma = 0;

    cout << "Promedio de un arreglo" << endl;
    cout << "Ingresa la cantidad de elementos para sacar el promedio" << endl;
    cin >> fila;

    cout << "Ingresa los " << fila << " numeros:" << endl;
    for (int i = 0; i < fila; i++)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> num[i];
        suma += num[i]; // suma de cada elemento
    }

    // Calcular el promedio
    promedio = suma / fila;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}