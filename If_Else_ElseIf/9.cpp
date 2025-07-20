#include <iostream>
using namespace std;

int main()
{
    int promedio, faltas;

    cout << "Beca para estudiantes" << endl;
    cout << "Digita cual es tu promedio de notas?" << endl;
    cin >> promedio;

    cout << "Digita cuantas faltas tienes?" << endl;
    cin >> faltas;

    if (promedio >= 85 && faltas < 3 && promedio >=0 && faltas >-1)
    {
        cout << "Felicidades, obtuviste la BECA" << endl;
    }
    else if (promedio < 85 && faltas >= 3 && promedio >=0 && faltas >-1)
        {
            cout << "Lastima, no obtuviste la BECA" << endl;
        }
       else if (promedio >= 85 && faltas >= 3 && promedio >=0 && faltas >-1)
        {
            cout << "Buen promedio pero tienes mas de 2 faltas. Nimodo" << endl;
        }
       else if (promedio < 85 && faltas < 3 && promedio >=0 && faltas >-1)
        {
            cout << "Bajo promedio pero con menos de 3 faltas" << endl;
        }
    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}