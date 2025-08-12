#include <iostream>

using namespace std;

int main()
{
    string estudiantes[] = {"Gabriel", "Nelson", "Maria", "Chavo", "Quico"};

    int longitud = sizeof(estudiantes) / sizeof(string); // Identificar cuanto elementos tiene el arreglo y se guarda en la variable longitud

    for (int i = 0; i < longitud; i++)
    {
        cout << "Estudiante #" << i + 1 << " " << estudiantes[i] << "\n";
    }

    return 0;
}