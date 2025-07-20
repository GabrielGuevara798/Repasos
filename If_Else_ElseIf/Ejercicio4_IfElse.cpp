#include <iostream>
using namespace std;

int main()
{
    int nota;

    cout << "Calificacion Aprobatoria" << endl;
    cout << "Digita tu nota" << endl;
    cin >> nota;

    if (nota >= 60 && nota <=100)
    {
        cout << "Aprobaste" << endl;
    }
    else if (nota < 60)
    {
        cout << "Reprobaste" << endl;
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}