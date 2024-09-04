// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 6
// Problema planteado: El numero ingresado es amigo.

#include <iostream>
using namespace std;
int sumaDivisoresPropios(int num) 
{
    int suma = 0;
    for (int i = 1; i <= num / 2; ++i) 
    {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma;
}
int main() 
{
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    int sumaDivisoresNum1 = sumaDivisoresPropios(num1);
    int sumaDivisoresNum2 = sumaDivisoresPropios(num2);
    if (sumaDivisoresNum1 == num2 && sumaDivisoresNum2 == num1) 
    {
        cout << num1 << " y " << num2 << " son números amigos." << endl;
    } else 
    {
        cout << num1 << " y " << num2 << " no son números amigos." << endl;
    }
    return 0;
}