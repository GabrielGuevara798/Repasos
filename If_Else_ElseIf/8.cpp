#include <iostream>
using namespace std;

int main()
{
    int contra, usuario, ContraCorrecta= 118811, UsuarioCorrecto = 252225;

    cout << "Verificacion de usurio y contrasena" << endl;
    cout << "Ingresa tu usuario" << endl;
    cin >> usuario;

    cout << "Ingresa tu contrasena" << endl;
    cin >> contra;

    if (usuario == UsuarioCorrecto && contra == ContraCorrecta)
    {
        cout << "Datos correctos" << endl;
    }
    else
    {
        cout << "Datos incorrectos" << endl;
    }

    return 0;
}
