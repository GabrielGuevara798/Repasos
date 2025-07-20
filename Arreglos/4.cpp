#include <iostream>
using namespace std;

int main(){
    int cant;
    
    cout << "Busqueda de un numero" << endl;
    cout << "Ingresa una cantidad de elementos: ";
    cin >> cant;
    
    // Declarar el arreglo después de conocer el tamaño
    int num[cant];
    
    // Llenar el arreglo
    for (int i = 0; i < cant; i++)
    {
        cout << "Numero " << (i+1) << ": ";
        cin >> num[i];
    }
    
    // Pedir el número a buscar
    int numeroBuscar;
    cout << "Ingresa el numero que quieres buscar: ";
    cin >> numeroBuscar;
    
    // Buscar el número en el arreglo
    bool encontrado = false;
    for (int i = 0; i < cant; i++)
    {
        if (num[i] == numeroBuscar)
        {
            encontrado = true;
            cout << "El numero " << numeroBuscar << " esta en el arreglo en la posicion " << (i+1) << endl;
            break; // Salir del bucle una vez encontrado
        }
    }
    
    if (!encontrado)
    {
        cout << "El numero " << numeroBuscar << " no esta en el arreglo" << endl;
    }

    return 0;
}