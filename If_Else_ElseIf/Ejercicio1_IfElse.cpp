#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Edad y Mayoria de Edad" << endl;
    cout << "Que edad tienes?" << endl;
    cin >> edad;

    if (edad <= 17 && edad > 0)
    {
        cout << "Usted es menor de edad" << endl;
    }

    else if (edad >= 18 && edad <= 150)
    {
        cout << "Usted es mayor de edad" << endl;
    }

    else
        (edad < 0 || edad >= 150);
    {
        cout << "Datos incorrectos" << endl;
    }
    return 0;
}