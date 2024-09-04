// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 12
// Problema planteado: Numeros multiplos.

#include <iostream>
using namespace std;
int main() 
{
    int num1, num2;
    cout << "Ingrese el primer número entero: ";
    cin >> num1;
    cout << "Ingrese el segundo número entero: ";
    cin >> num2;
    if (num2 != 0) 
    { 
        if (num1 % num2 == 0) 
        {
            cout << num1 << " es múltiplo de " << num2 << "." << endl;
        } else if (num2 % num1 == 0) 
        {
            cout << num2 << " es múltiplo de " << num1 << "." << endl;
        } else 
        {
            cout << "Ninguno de los números es múltiplo del otro." << endl;
        }
    } else if (num1 == 0) 
    { 
        cout << "Ambos números son cero, lo cual es un caso indefinido para múltiplos." << endl;
    } else {
        cout << "El segundo número es cero, por lo que no se puede determinar si es múltiplo del primero." << endl;
    }
    return 0;
}