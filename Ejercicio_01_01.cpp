// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 1
// Problema planteado: Area de un triángulo.

#include <iostream>
using namespace std;

int main() 
{
    float base, altura;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    cout << "El área del triángulo es: " << (base * altura) / 2 << endl;
    return 0;
}