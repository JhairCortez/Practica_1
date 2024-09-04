// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 16
// Problema planteado: Mostrar los numeros del 1 al n.

#include <iostream>
using namespace std;
int main() 
{
    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 && i % 5 == 0) 
        {
            cout << "z" << endl;
        }
        else if (i % 3 == 0) 
        {
            cout << "x" << endl;
        }
        else if (i % 5 == 0) 
        {
            cout << "y" << endl;
        }
        else 
        {
            cout << i << endl;
        }
    }
    return 0;
}