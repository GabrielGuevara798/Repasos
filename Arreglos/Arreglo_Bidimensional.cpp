#include <iostream>

using namespace std;
// matriz
// arreglo [x][y]
int main()
{

    string autos[][3] = {{"Toyota", "Ford", "BMW"},
                         {"Mercedes-Benz", "Volkswagen", "Audi"},
                         {"Honda", "Chevrolet", "Ferrari"}};
    int filas = sizeof(autos) / sizeof(autos[0]);
    int columnas = sizeof(autos[0]) / sizeof(autos[0][0]);

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << autos[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}