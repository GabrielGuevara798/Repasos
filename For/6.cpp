#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Suma de numeros pares" << endl;
    cout << "Ingresa un numero" << endl;
    cin >> num;

    for (int i = 2; i <= num; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}
