#include <iostream>

using namespace std;

int main()
{
    string comidas[5];
    int tam = sizeof(comidas) / sizeof(comidas[0]);

    for (int i = 0; i < tam; i++)
    {
        cout << "Ingresa tu comida favorita #" << i + 1 << ": "; // i +1 es pq el i es = 0
        getline(cin, comidas[i]);
    }

    cout << "Te gustan los siguientes alimentos: \n";

    for (string comida : comidas)
    {
        cout << comida << "\n";
    }

    return 0;
}