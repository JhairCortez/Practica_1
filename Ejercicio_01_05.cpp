// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 1
// Problema planteado: El numero ingresado es primo.

#include <iostream>
using namespace std;
bool esPrimo(int num) 
{
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) 
        {
            return false; 
        }
    }
    return true;
int main() 
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    if (esPrimo(numero)) 
    {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }
    return 0;
}