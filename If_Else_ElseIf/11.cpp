#include <iostream>
using namespace std;

int main()
{
    double num1, num2;

    cout << "Numero mas cercano a 100" << endl;
    cout << "Ingresa la cantidad del primer numero" << endl;
    cin >> num1;

    cout << "Ingresa la cantidad del segundo numero" << endl;
    cin >> num2;

    if (num1 <= 100 && num2 <= 100 && num1 > num2)
    {
        cout << "El numero mas cercano a 100 es " << num1 << endl;
    }
    else if (num1 <= 100 && num2 <= 100 && num2 > num1)
    {
        cout << "El numero mas cercano a 100 es " << num2 << endl;
    }
    else if (num1 <= 100 && num2 <= 100 && num2 == num1)
    {
        cout << "Ambos numeros son cercanos a 100" << endl;
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}
