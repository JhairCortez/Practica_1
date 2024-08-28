// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 1
// Problema planteado: Conversion de temperatura.

#include <iostream>
using namespace std;
int main() 
{
    float celsius, kelvin;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;
    kelvin = celsius + 273.15;
    cout << "La temperatura en Kelvin es: " << kelvin << endl;
    return 0;
}