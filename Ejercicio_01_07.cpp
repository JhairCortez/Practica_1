// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 7
// Problema planteado: Meses.

#include <iostream>
using namespace std;
int main() 
{
    int mes;
    cout << "Ingrese un número del 1 al 12 para obtener el mes correspondiente: ";
    cin >> mes;
    switch (mes) 
    {
        case 1:
            cout << "Enero" << endl;
            break;
        case 2:
            cout << "Febrero" << endl;
            break;
        case 3:
            cout << "Marzo" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            break;
        case 5:
            cout << "Mayo" << endl;
            break;
        case 6:
            cout << "Junio" << endl;
            break;
        case 7:
            cout << "Julio" << endl;
            break;
        case 8:
            cout << "Agosto" << endl;
            break;
        case 9:
            cout << "Septiembre" << endl;
            break;
        case 10:
            cout << "Octubre" << endl;
            break;
        case 11:
            cout << "Noviembre" << endl;
            break;
        case 12:
            cout << "Diciembre" << endl;
            break;
        default:
            cout << "Mes inválido. Ingrese un número del 1 al 12." << endl;
            break;
    }
    return 0;
}