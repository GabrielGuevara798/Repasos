#include <iostream>
using namespace std;

int main()
{
    int num[] = {1, 2, 3, 4, 5};

    cout << "Invertir un arreglo" << endl;
    int invertir;
    cout << "Arreglo original" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Numero " << (i + 1) << ". " << endl;
    }

    cout << "Arreglo invertido" << endl;

    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = num[i];
        num[i] = num[5 - 1 - i];
        num[5 - 1 - i] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        if (i <= 5 - 1)
            cout << "Numero " << num[i] << "." << endl;
    }
    cout << endl;
    return 0;
}