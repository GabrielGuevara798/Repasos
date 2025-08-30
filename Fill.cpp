#include <iostream>

using namespace std;

int main()
{
    int tam = 100;
    string comidas[tam];
    // Fill sirve para llenar un rango de elementos con un valor fijado
    // fill(inicio, final, valor)
    fill(comidas, comidas + tam / 2, "Pizza");
    fill(comidas + tam / 2, comidas + tam, "Hamburguesa");

    for (string comida : comidas)
    {
        cout << comida << " ";
    }

    return 0;
}