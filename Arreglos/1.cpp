#include <iostream>
using namespace std;

int main()
{
    int num[] = {4, 6}, suma = 0;
    for (int i = 0; i <2; i++)
    {
        suma +=num[i];
    }
    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
