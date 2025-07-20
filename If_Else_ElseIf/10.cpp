#include <iostream>
using namespace std;

int main(){
double peso;

cout << "Calculadora de Tarifa de Envio" << endl;
cout << "Ingresa el peso de tu paquete (kg)" << endl;
cin>>peso;

if (peso <= 5 && peso >=0)
{
    cout << "Tu paquete pesa menos de 6kg y se te cobra $5" << endl;
}
else if (peso >=6 && peso <=10)
{
    cout << "Tu paquete pesa entre 6kg y 10kg y se te cobra $10" << endl;
}
else if (peso > 10)
{
    cout << "Tu paquete pesa mas de 10kg y se te cobra 15$" << endl;
}
else {
    cout << "Datos incorrectos" << endl;
}



    return 0;
}
