#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Evaluacion de temperatura" << endl;
    cout << "Cuantos grados Celsius calculas en la temperatura?" << endl;
    cin >> temp;

    if (temp < 15)
    {
        cout << "La temperatura esta fria" << endl;
    }
    else if (temp >= 15 && temp <= 25)
    {
        cout << "La termperatura esta templada" << endl;
    }
    else if (temp > 25)
    {
        cout << "La temperatura esta caliente" << endl;
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}