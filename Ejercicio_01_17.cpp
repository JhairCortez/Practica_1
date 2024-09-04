// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 17
// Problema planteado: Trasformar un numero decimal a binario.

#include <iostream>
#include <vector>
using namespace std;
void decimalABinario(int num) 
{
    vector<int> binario;
    if (num == 0) 
    {
        cout << "0" << endl;
        return;
    }
    while (num > 0) 
    {
        int resto = num % 2; 
        binario.push_back(resto);
        num /= 2; 
    }
    cout << "El número en binario es: ";
    for (int i = binario.size() - 1; i >= 0; --i) 
    {
        cout << binario[i];
    }
    cout << endl;
}
int main() {
    int numero;
    cout << "Ingrese un número entero decimal: ";
    cin >> numero;
    if (numero < 0) 
    {
        cout << "Por favor, ingrese un número entero no negativo." << endl;
    } else 
    {
        decimalABinario(numero);
    }
    return 0;
}