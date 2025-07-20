#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    cout << "Serie de numeros alternados" << endl;
    cout << "Ingresa el numero donde quieres que acabe la serie" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << -i;
        }
        else
        {
            cout << i;
        }
        if (i < num)
        {
            cout << ",";
        }
    }

    return 0;
}