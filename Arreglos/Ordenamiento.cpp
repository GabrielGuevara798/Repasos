#include <iostream>

using namespace std;

void clasificar(int numeros[], int tam)
{
    int temp; // Temporal, sirve para cambiar una variable de manera temporal
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}
int main()
{

    int numeros[] = {98, 52, 14, 67, 31, 83, 45, 76, 22, 90, 5, 39, 61, 100, 27, 73, 16, 54, 88, 12, 35, 79, 41, 95, 8, 58, 20, 64, 33, 86, 47, 71, 3, 25, 92, 50, 18, 69, 37, 81, 10, 56, 29, 78, 43, 97, 7, 62, 24, 84, 48, 75, 19, 91, 53, 15, 68, 32, 87, 40, 4, 59, 26, 72, 36, 93, 11, 65, 30, 80, 44, 99, 6, 57, 21, 74, 38, 85, 49, 13, 66, 28, 77, 42, 94, 9, 60, 23, 70, 34, 89, 46, 2, 55, 17, 63, 1, 51, 96, 82};
    int tam = sizeof(numeros) / sizeof(int);
    clasificar(numeros, tam);
    for (int elementos : numeros)
    {
        cout << elementos << " ";
    }

    return 0;
}