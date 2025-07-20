#include <iostream>
using namespace std;

double saldo = 200.00, retirar, depositar;
void ConsultaCuenta()
{
    cout << "Tu saldo actual es de $" << saldo << endl;
}

void DepositoCuenta()
{
    cout << "Ingresa la cantidad a depositar" << endl;
    cin >> depositar;
    saldo += depositar;
    if (depositar >= 0)
    {
        cout << "Deposito de dinero aprobado. Tu saldo actual es de $" << saldo << endl;
    }
    else
    {
        cout << "Datos invalidos" << endl;
    }
}

void RetiroCuenta()
{
    cout << "Ingresa la cantidad a retirar" << endl;
    cin >> retirar;
    saldo -= retirar;
    if (retirar < saldo)
    {
        cout << "Retiro de dinero aprobado. Tu saldo actual es de $" << saldo << endl;
    }
    else if (retirar > saldo)
    {
        cout << "Datos invalidos" << endl;
    }
}

int main()
{
    int opcion, pin = 1234;

    cout << "Cajero automatico" << endl;

    do
    {
        cout << "Ingrese su PIN" << endl;
        cin >> pin;
    } while (pin != 1234);

    cout << "PIN correcto" << endl
         << endl;

    do
    {
        cout << "Ingrese una opcion" << endl;
        cout << "1. Consulta de cuenta" << endl;
        cout << "2. Deposito de dinero" << endl;
        cout << "3. Retiro de dinero" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ConsultaCuenta();
            break;
        case 2:
            DepositoCuenta();
            break;
        case 3:
            RetiroCuenta();
            break;
        case 4:
            cout << "Saliste del programa" << endl;
            break;
        default:
            cout << "Datos invalidos" << endl;
            break;
        }
    } while (opcion != 4);

    return 0;
}