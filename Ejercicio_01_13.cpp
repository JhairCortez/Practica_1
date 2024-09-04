// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 13
// Problema planteado: Numero entero con las sifras al reves.

#include <iostream>
using namespace std;
int invertirNumero(int num) 
{
    int invertido = 0;
    int signo = (num < 0) ? -1 : 1; 
    num = abs(num); 
    while (num > 0) 
    {
        int digito = num % 10; 
        invertido = invertido * 10 + digito; 
        num /= 10; 
    }
    return invertido * signo; 
}
int main() 
{
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    int numeroInvertido = invertirNumero(numero);
    cout << "El número con las cifras al revés es: " << numeroInvertido << endl;
    return 0;
}