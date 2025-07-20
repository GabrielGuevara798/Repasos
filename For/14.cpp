#include <iostream>
using namespace std;

int main()
{
    int num, inverso;

    cout << "Invertir un numero" << endl;
    cout << "Ingresa una seria de numeros para invertir el orden" << endl;
    cin >> num;

    for (int n = num; n != 0; n /= 10)
    {
        int digito = n % 10;
        inverso = inverso * 10 + digito;
    }

    cout << "El numero inverso es: " << inverso << endl;

    return 0;
}