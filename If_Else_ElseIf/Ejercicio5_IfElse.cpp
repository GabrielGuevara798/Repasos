#include <iostream>
using namespace std;

int main()
{
    double precio;

    cout << "Descuento en tienda" << endl;
    cout << "Ingresa el monto de tu compra" << endl;
    cin >> precio;

    if (precio > 100)
    {
        cout << "Tu monto es $" << precio << " y es mayor que 100, aplica un %10" << endl;
        cout << "Tu monto actual es de $" << precio * 0.10 << endl;
    }
    else if (precio <= 100 && precio >= 0)

    {
        cout << "Tu  monto es $" << precio << " y es menor que 10, no aplica %10" << endl;
    }

    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}