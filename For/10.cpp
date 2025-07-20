#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Serie Fibonacci" << endl;
    cout << "Ingrese el numero de terminos de la serie de Fibonacci:" << endl;
    cin >> num;

    int a = 0, b = 1, siguiente;

    cout << "Serie de Fibonacci con " << num << " terminos" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << a << " " << endl;
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;

    return 0;
}