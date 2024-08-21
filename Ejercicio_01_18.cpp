// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 1
// Problema planteado: Numero de Amstrong.

#include <iostream>
#include <cmath>
using namespace std;
bool esNumeroArmstrong(int num)
{
    int original = num;
    int suma = 0;
    int digitos = 0;
    while (num > 0) 
    {
        num /= 10;
        digitos++;
    }
    num = original; 
    while (num > 0) 
    {
        int digito = num % 10;
        suma += pow(digito, digitos);
        num /= 10;
    }
    return suma == original;
}
int main() 
{
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    if (esNumeroArmstrong(numero)) 
    {
        cout << numero << " es un número de Armstrong." << endl;
    } else 
    {
        cout << numero << " no es un número de Armstrong." << endl;
    }
    return 0;
}