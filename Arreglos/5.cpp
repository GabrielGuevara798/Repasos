#include <iostream>
using namespace std;

int main()
{
    int num[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Contar numeros pares e impares" << endl;

    for (int i = 0; i < 8; i++)
    {
        if (num[i] % 2)
        {
            cout << "Este numero es impar " << num[i] << endl;
        }
        else
        {
            cout << "Este numero es par " << num[i] << endl;
        }
    }

    return 0;
}