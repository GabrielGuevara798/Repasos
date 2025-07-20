#include <iostream>
using namespace std;

int main()
{
    int dia;

    cout << "Dia laboral o fin de semana" << endl;
    cout << "Digita un numero de la semana" << endl;
    cin >> dia;

        if (dia > 0 && dia < 6)
    {
        cout << "Es un dia laboral" << endl;
    }
    else if (dia > 5 && dia < 8)
    {
        cout << "Es fin de semana" << endl;
    }

    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}