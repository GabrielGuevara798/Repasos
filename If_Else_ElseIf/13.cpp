#include <iostream>
using namespace std;

int main()
{
    double nota;

    cout << "Conversión de Notas a Letras" << endl;
    cout << "Ingresa tu nota" << endl;
    cin >> nota;

    if (nota >= 90 && nota <= 100)
    {
        cout << "Tienes un A" << endl;
    }
    else if (nota >= 80 && nota < 90)
    {
        cout << "Tienes un B" << endl;
    }
    else if (nota >= 70 && nota < 80)
    {
        cout << "Tienes un C" << endl;
    }
    else if (nota >= 60 && nota < 70)
    {
        cout << "Tienes un D" << endl;
    }
    else if (nota < 60 && nota >= 0)
    {
        cout << "Tienes un F" << endl;
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}
