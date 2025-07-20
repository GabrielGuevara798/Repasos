#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Tabla de multiplicar" << endl;
    cout << "Ingresa un numero" << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << "x" << i << "=" << num * i << endl;
    }

    return 0;
}