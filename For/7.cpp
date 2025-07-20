#include <iostream>
using namespace std;

int main()
{
    int num, fac=1;

    cout << "Factorial de un numero" << endl;
    cout << "Ingresa un numero" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    cout << num << "! = " << fac << endl;

    return 0;
}