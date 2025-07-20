#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Numero primo" << endl;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 0; i <1; i++)
    {
        if (n <= 1)
        {
            cout << "No es primo" << endl;
            return 0;
        }
        
    }
    

    return 0;
}