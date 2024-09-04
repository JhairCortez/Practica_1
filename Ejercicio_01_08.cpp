// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 8
// Problema planteado: Vocal o consonante.

#include <iostream>
using namespace std;
int main() 
{
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    letra = tolower(letra);
    if (letra >= 'a' && letra <= 'z') 
    {
        switch (letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << letra << " es una vocal." << endl;
                break;
            default:
                cout << letra << " es una consonante." << endl;
                break;
        }
    } else 
    {
        cout << letra << " no es una letra válida." << endl;
    }
    return 0;
}