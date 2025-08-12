#include <iostream>

using namespace std;

int main(){
    string estudiantes[]={"Gabriel","Nelson","Merary"};
    //sizeof(estudiantes) / sizeof (string) sirve para contar cuantos elementos hay en un arreglo

    cout << "El todal de estudiantes en el salon son" << sizeof(estudiantes) / sizeof (string) << " Estudiantes\n";
    return 0;
}