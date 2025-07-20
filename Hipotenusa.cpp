#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double a, b, c;
    cout << "Ingrese el cateto a: ";
    cin >> a;
    cout << "Ingrese el cateto b: ";
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    cout << "La Hip mide: " << c << endl;
    return 0;
}