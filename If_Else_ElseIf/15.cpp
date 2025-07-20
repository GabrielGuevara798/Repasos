#include <iostream>
using namespace std;

int main()
{
    int fecha;

    cout << "Anio biniesto" << endl;
    cout << "Ingresa un anio" << endl;
    cin >> fecha;

    if (fecha % 4 == 0)
    {
        cout << "Tu anio es bisiesto" << endl;
    }
    else
    {
        cout << "Tu anio no es bisiesto" << endl;
    }

    return 0;
}