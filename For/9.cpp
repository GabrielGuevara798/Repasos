#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Numeros Divisibles por 3 y 5" << endl;
    cout << "El resultado es: ";
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << ", ";
        }
    }
    cout << endl;

    return 0;
}