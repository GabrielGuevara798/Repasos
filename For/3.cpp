#include <iostream>
using namespace std;

int main()
{
    int num, suma = 0;

    cout << "Suma de los Primeros N Números" << endl;
    cout << "Ingresa un numero natural" << endl;
    cin >> num;

    if (num <= 0)
    {
        cout << "Ingresa numeros naturales" << endl;
        return 0;
    }

    for (int i = 1; i <= num; i++)
    {
        suma += i;
    }

    cout << "La suma de los primeros " << num << " numeros naturales es: " << suma << endl;
    return 0;
}