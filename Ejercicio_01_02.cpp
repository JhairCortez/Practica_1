// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 2
// Problema planteado: Volumen de esfera.

#include <iostream>
using namespace std;
int main() 
{
    float radio, volumen;
    const float PI = 3.14159; 
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    volumen = (4.0 / 3.0) * PI * radio * radio * radio;
    cout << "El volumen de la esfera es: " << volumen << endl;
    return 0;
}