#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Comparacion de Numeros" << endl;
    cout << "Digita el primer numero" << endl;
    cin >> num1;

    cout << "Digita el segundo numero" << endl;
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " Es mayor que " << num2 << endl;
    }
    else if (num2 > num1)
    {
        cout << num2 << " Es mayor que " << num1 << endl;
    }
    else if (num1 == num2)
    {
        cout << num1 << " y " << num2 << " son iguales" << endl;
    }
    return 0;
}