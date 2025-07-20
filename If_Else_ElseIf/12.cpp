#include <iostream>
using namespace std;

int main()
{
    double lado1, lado2, lado3;

    cout << "Clasificación de Triángulos" << endl;
    cout << "Digita la medida del primer lado del triangulo(cm)" << endl;
    cin >> lado1;

    cout << "Digita la meida del segudno lado del triangulo(cm)" << endl;
    cin >> lado2;

    cout << "Digita la medida del tercer lado del triangulo(cm)" << endl;
    cin >> lado3;
    if (lado1 > 0 && lado2 > 0 && lado3 > 0)
    {

        if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1)
        {
            cout << "Tu tringulo es un equilatero" << endl;
        }
        else if (lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
        {
            cout << "Tu triangulo es un isoceles" << endl;
        }
        else if (lado1 < lado2 || lado2 < lado3 || lado3 < lado1)
        {
            cout << "Tu triangulo es un escaleno" << endl;
        }
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }
    return 0;
}