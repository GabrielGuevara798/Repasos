#include <iostream>
using namespace std;

int main()
{
    int num[] = {2, 4, 6, 8}, menor = num[0], mayor = num[0];
    cout << "Numero mayor y menor" << endl;

    for (int i = 0; i < 4; i++)
    {
        if (num[i] > mayor)
        {
            mayor = num[i];
        }
        else if (num[i] < menor)
        {
            menor = num[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    return 0;
}