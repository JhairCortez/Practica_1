// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 10
// Problema planteado: Digitos de un numero entero.

#include <iostream>
using namespace std;
int contarDigitos(int num) {
    if (num == 0) 
    {
        return 1;
    }
    num = abs(num);
    int contador = 0;
    while (num > 0) 
    {
        num /= 10;
        ++contador; 
    }
    return contador;
}
int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    int cantidadDigitos = contarDigitos(numero);
    cout << "La cantidad de dígitos en el número " << numero << " es: " << cantidadDigitos << endl;
    return 0;
}