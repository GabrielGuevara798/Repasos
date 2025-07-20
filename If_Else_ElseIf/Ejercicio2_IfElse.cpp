#include <iostream>
using namespace std;

int main()
{
    int par, impar, num;

    cout << "Numero Par o Impar" << endl;
    cout << "Digita un numero" << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Tu numero es par" << endl;
    }
    else if (num % 1 == 0)
    {
        cout << "Tu numero es impar" << endl;
    }
    else
    {
    }

    return 0;
}