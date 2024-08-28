// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 1
// Problema planteado: Calcule el promedio de notas.

#include <iostream>
using namespace std;
int main() 
{
    int numNotas;
    float suma = 0.0, nota, promedio;
    cout << "Ingrese el número de notas: ";
    cin >> numNotas;
    if (numNotas <= 0) 
    {
        cout << "El número de notas debe ser positivo." << endl;
        return 1; 
    for (int i = 0; i < numNotas; ++i) {
        cout << "Ingrese la nota " << (i + 1) << ": ";
        cin >> nota;
        
        if (nota < 0 || nota > 10) 
        {
            cout << "Nota fuera del rango esperado (0 a 10). Se ignorará." << endl;
            continue; 
        }
        suma += nota;
    }
    promedio = suma / numNotas;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}