#include <iostream>
using namespace std;

int main()
{
    int num[] = {1, 2, 4, 3, 1, 2, 5};

    cout << "Frecuencia de un numero en el arreglo" << endl;
    cout << "Arreglo: " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl
         << endl;

    int buscar;
    cout << "Ingresa un numero para ver su frecuencia: ";
    cin >> buscar;

    int frecuencia = 0;
    for (int i = 0; i < 7; i++)
    {
        if (num[i] == buscar)
        {
            frecuencia++;
        }
    }
    cout << "El numero " << buscar << " aparece " << frecuencia << " vez(es) en el arreglo" << endl;
    return 0;
}