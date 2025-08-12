#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int seleccionJugador, seleccionComputadora;
string jugadaJugador, jugadaComputadora, resultado;

void mostrarHistorial() {
    const string RESET = "\033[0m";
    const string BOLD = "\033[1m";
    const string LINEA = "======================================";
    
    cout << BOLD << LINEA << RESET << endl;
    cout << BOLD << "          HISTORIAL DE JUGADAS       " << RESET << endl;
    cout << BOLD << LINEA << RESET << endl;
    cout << "Tu elección: " << jugadaJugador << endl;
    cout << "Computadora: " << jugadaComputadora << endl;
    cout << "Resultado: " << resultado << endl;
    cout << BOLD << LINEA << RESET << "\n\n";
}

void menu() {
    const string RESET = "\033[0m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string GREEN = "\033[32m";
    const string RED = "\033[31m";

    system("cls || clear");
    
    // Mostrar historial si ya hay jugadas
    if(!jugadaJugador.empty()) {
        mostrarHistorial();
    }

    cout << BLUE << "======================================\n"
         << RESET;
    cout << BLUE << "|" << RESET << "                                    " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "|" << YELLOW << "     PIEDRA - PAPEL - TIJERA      " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "|" << RESET << "                                    " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "======================================\n"
         << RESET;
    cout << BLUE << "|" << RESET << "                                    " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "|" << RESET << "  1. " << RED << "Piedra" << RESET << "   (Roca)            " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "|" << RESET << "  2. " << GREEN << "Papel" << RESET << "    (Hoja)            " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "|" << RESET << "  3. " << YELLOW << "Tijera" << RESET << "   (Tijeras)         " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "|" << RESET << "  4. Salir del juego               " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "|" << RESET << "                                    " << BLUE << "|\n"
         << RESET;
    cout << BLUE << "======================================\n"
         << RESET;
    cout << "\n";
    cout << YELLOW << "=> Ingrese su eleccion (1-4): " << RESET;
    cin >> seleccionJugador;
}

void seleccionUsuario(int seleccion) {
    const string RESET = "\033[0m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string BLUE = "\033[34m";
    const string YELLOW = "\033[33m";
    const string MAGENTA = "\033[35m";
    const string BOLD = "\033[1m";

    system("cls || clear");
    
    // Mostrar historial si ya hay jugadas
    if(!jugadaJugador.empty()) {
        mostrarHistorial();
    }

    cout << BOLD << "======================================" << RESET << endl;
    cout << BOLD << "          RESULTADO DE ELECCIÓN       " << RESET << endl;
    cout << BOLD << "======================================" << RESET << endl;
    cout << "\n";

    switch (seleccion) {
        case 1:
            jugadaJugador = RED + BOLD + "PIEDRA" + RESET;
            cout << RED << BOLD << "   HAS ELEGIDO: PIEDRA" << RESET << endl;
            cout << RED << "   (La roca sólida e indestructible)" << RESET << endl;
            break;
        case 2:
            jugadaJugador = GREEN + BOLD + "PAPEL" + RESET;
            cout << GREEN << BOLD << "   HAS ELEGIDO: PAPEL" << RESET << endl;
            cout << GREEN << "   (La hoja que cubre todo)" << RESET << endl;
            break;
        case 3:
            jugadaJugador = BLUE + BOLD + "TIJERA" + RESET;
            cout << BLUE << BOLD << "   HAS ELEGIDO: TIJERA" << RESET << endl;
            cout << BLUE << "   (El filo cortante)" << RESET << endl;
            break;
        case 4:
            cout << MAGENTA << BOLD << "   SALIENDO DEL JUEGO..." << RESET << endl;
            cout << MAGENTA << "   ¡Hasta la próxima!" << RESET << endl;
            break;
        default:
            cout << YELLOW << BOLD << "   OPCIÓN INVÁLIDA" << RESET << endl;
            cout << YELLOW << "   Por favor elige entre 1 y 4" << RESET << endl;
    }

    cout << "\n";
    cout << BOLD << "======================================" << RESET << endl;
    cout << "\n";
}

void mostrarGanador() {
    const string RESET = "\033[0m";
    const string BOLD = "\033[1m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string CYAN = "\033[36m";

    system("cls || clear");
    
    // Mostrar historial si ya hay jugadas
    if(!jugadaJugador.empty()) {
        mostrarHistorial();
    }

    seleccionComputadora = rand() % 3 + 1;

    cout << BOLD << "**************************************" << RESET << endl;
    cout << BOLD << "         RESULTADO DEL JUEGO         " << RESET << endl;
    cout << BOLD << "**************************************" << RESET << endl;
    cout << "\n";

    // Guardar selección de la computadora
    switch (seleccionComputadora) {
        case 1: 
            jugadaComputadora = RED + "Piedra" + RESET; 
            break;
        case 2: 
            jugadaComputadora = GREEN + "Papel" + RESET; 
            break;
        case 3: 
            jugadaComputadora = BLUE + "Tijera" + RESET; 
            break;
    }

    cout << CYAN << BOLD << "Computadora eligió: " << RESET << jugadaComputadora << "\n\n";
    cout << BOLD << "Resultado: " << RESET;

    if (seleccionJugador >= 1 && seleccionJugador <= 3) {
        if (seleccionJugador == seleccionComputadora) {
            resultado = YELLOW + BOLD + "EMPATE!" + RESET;
            cout << resultado << endl;
        }
        else if ((seleccionJugador == 1 && seleccionComputadora == 3) ||
                (seleccionJugador == 2 && seleccionComputadora == 1) ||
                (seleccionJugador == 3 && seleccionComputadora == 2)) {
            resultado = GREEN + BOLD + "GANASTE! :)" + RESET;
            cout << resultado << endl;
        }
        else {
            resultado = RED + BOLD + "GANA LA COMPUTADORA :(" + RESET;
            cout << resultado << endl;
        }
    }
    else {
        resultado = RED + "Opción no válida" + RESET;
        cout << resultado << endl;
    }

    cout << "\n" << BOLD << "Reglas:" << RESET << endl;
    cout << "- Piedra gana a Tijera" << endl;
    cout << "- Papel gana a Piedra" << endl;
    cout << "- Tijera gana a Papel" << endl;

    cout << "\n";
    cout << BOLD << "**************************************" << RESET << endl;
    cout << "\n";
}

int main() {
    srand(time(0));
    do {
        menu();
        seleccionUsuario(seleccionJugador);
        if (seleccionJugador >= 1 && seleccionJugador <= 3) {
            mostrarGanador();
        }
    } while (seleccionJugador != 4);

    return 0;
}