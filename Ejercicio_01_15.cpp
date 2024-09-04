// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 15
// Problema planteado: Triangulo de numeros.

#include <iostream>
using namespace std;
void imprimirLinea(int n) 
{
    for (int i = 1; i <= n; ++i) 
    {
        cout << i;
    }
    for (int i = n - 1; i >= 1; --i) 
    {
        cout << i;
    }
    cout << endl;
}
int main() 
{
    const int LINEAS = 8;
    for (int i = 1; i <= LINEAS; ++i) 
    {
        imprimirLinea(i);
    }
    return 0;
}