#include <iostream>

using namespace std;
void totalPrecios(double precios[], int tam)
{
    double suma = 0;
    for (int i = 0; i < tam; i++)
    {
        cout << precios[i];
        suma += precios[i];
        if (i< tam-1)
        {
            cout << " + ";
        }
    }
    cout << "\nTotal $" << suma << "\n";
}

int main()
{
    double precios[] = {14.50, 16.99, 20.00, 78.99};
    int tam = sizeof(precios) / sizeof(double);

    totalPrecios(precios, tam);

    return 0;
}