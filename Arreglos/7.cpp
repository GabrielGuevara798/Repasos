#include <iostream>
using namespace std;

int main()
{
    int num[] = {5, 4, 3, 2, 6, 1, 7, 8, 9, 10}, i, j, temp;

    cout << "Ordenar un arreglo con metodo burbuja" << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    cout << "Orden Ascendente: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " " << endl;
    }
    cout << "Orden Descendente" << endl;
    for (int i = 9; i > -1; i--)
    {
        cout << num[i] << " " << endl;
    }

    return 0;
}