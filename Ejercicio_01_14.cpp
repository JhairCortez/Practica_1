// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 14
// Problema planteado: Factorial de un numero entero.

#include <iostream>
using namespace std;
int sumaMultiplicaciones(int a, int b) 
{
    int resultado = 0;
    for (int i = 0; i < b; ++i) {
        resultado += a;
    }
    return resultado;
}
int calcularFactorial(int num) 
{
    if (num == 0 || num == 1) 
    {
        return 1;
    }
    int factorial = 1;
    for (int i = 2; i <= num; ++i) 
    {
        factorial = sumaMultiplicaciones(factorial, i); 
    }
    return factorial;
}
int main() 
{
    int numero;
    cout << "Ingrese un número entero no negativo: ";
    cin >> numero;
    if (numero < 0) 
    {
        cout << "El número debe ser entero no negativo." << endl;
    } else {
        int factorial = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }
    return 0;
}