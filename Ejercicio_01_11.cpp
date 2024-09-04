// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 11
// Problema planteado: Multiplicar 2 numeros enteros.

#include <iostream>
using namespace std;
int multiplicar(int a, int b) {
    int resultado = 0;
    int absB = abs(b); 
    for (int i = 0; i < absB; ++i) 
    {
        resultado += a;
    }
    if (b < 0) 
    {
        resultado = -resultado;
    }
    return resultado;
}
int main()
{
    int num1, num2;
    cout << "Ingrese el primer número entero: ";
    cin >> num1;
    cout << "Ingrese el segundo número entero: ";
    cin >> num2;
    int producto = multiplicar(num1, num2);
    cout << "El producto de " << num1 << " y " << num2 << " es: " << producto << endl;
    return 0;
}