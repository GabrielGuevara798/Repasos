#include <iostream>
using namespace std;

int main(){
    int num, suma = 0;

    cout << "Suma de numeros" << endl;
    cout << "Ingresa una suma de numeros hasta terminar 0" << endl;
    cin >> num;

    while (num)
    {
        suma += num;      // Suma el número ingresado
        cin >> num;       // Pide el siguiente número
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}