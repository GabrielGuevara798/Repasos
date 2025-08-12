#include <iostream>
#include <ctime>

using namespace std;

int seleccionJugador, seleccionComputadora;
void menu()
{
    cout << "Piedra-Papel-Tijera" << endl;
    cout << "Selecciona una opcion" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "4. Salir del juego" << endl;
    cin >> seleccionJugador;
}
void seleccionUsuario(int seleccionJugador)
{
    switch (seleccionJugador)
    {
    case 1:
        cout << "Elegiste piedra\n\n";
        break;
    case 2:
        cout << "Elegiste papel\n\n";
        break;
    case 3:
        cout << "Elegiste tijera\n\n";
        break;
    case 4:
        cout << "Saliste del juego\n";
        break;
    default:
        cout << "Datos invalidos" << endl;
        break;
    }
}

void mostrarGanador()
{

    int seleccionComputadora = rand() % 3 + 1;
    switch (seleccionComputadora)
    {
    case 1:
        cout << "Computadora elige Piedra\n";
        break;
    case 2:
        cout << "Computadora elige Papel\n";
        break;
    case 3:
        cout << "Computadora elige Tijera\n";
        break;
    default:
        cout << "Datos invalidos\n";
        break;
    }
    switch (seleccionJugador)
    {
    case 1: // Piedra
        if (seleccionComputadora == 1)
        {
            cout << "Empate\n"; // Piedra vs piedra= empate
        }
        else if (seleccionComputadora == 2) // Papel
        {
            cout << "Gana la computadora\n"; // Papel vs piedra= gana papel
        }
        else if (seleccionComputadora == 3) // Tijera
        {
            cout << "Gana el jugador\n"; // Piedra vs tijera= gana piedra
        }
        break;
    case 2:                            // Papel
        if (seleccionComputadora == 1) // piedra
        {
            cout << "Gana el jugador\n"; // piedra vs papel= gana papel
        }
        else if (seleccionComputadora == 2) // papel
        {
            cout << "Empate\n"; // papel vs papel= empate
        }
        else if (seleccionComputadora == 3) // tijera
        {
            cout << "Gana la computadora\n"; // papel vs tijera = gana tijera
        }
        break;

    case 3:                            // Tijera
        if (seleccionComputadora == 1) // piedra
        {
            cout << "Gana la computadora\n"; // tijera vs piedra = gana piedra
        }
        else if (seleccionComputadora == 2) // papel
        {
            cout << "Gana el jugador\n"; // tijera vs papel = gana tijera
        }
        else if (seleccionComputadora == 3) // tijera
        {
            cout << "Empate\n"; // tijera vs tijera = empate
        }
        break;
    default:
        cout << "Datos invalidos\n";
        break;
    }
}
int main()
{
    srand(time(0));
    do
    {
        menu();
        seleccionUsuario(seleccionJugador);
        if (seleccionJugador >= 1 && seleccionJugador <= 3)
        {
            mostrarGanador();
        }
    } while (seleccionJugador != 4);

    return 0;
}