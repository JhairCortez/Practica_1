// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 9
// Problema planteado: Numeros primos.

#include <iostream>
using namespace std;
bool esPrimo(int num) 
{
    if (num <= 1) 
    {
        return false;
    }
    if (num <= 3) 
    {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) 
    {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) 
    {
        if (num % i == 0 || num % (i + 2) == 0) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    int count = 0; 
    int num = 2; 
    cout << "Los primeros 100 números primos son:" << endl;
    while (count < 100) 
    {
        if (esPrimo(num)) 
        {
            cout << num << " ";
            ++count;
        }
        ++num;
    }
    cout << endl;
    return 0;
}