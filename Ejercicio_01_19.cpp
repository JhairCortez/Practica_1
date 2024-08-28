// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 21/08/2024
// Número de ejercicio: 1
// Problema planteado: Dias, horas, minutos y segundos.

#include <iostream>
using namespace std;
int convertirASegundos(int dias, int horas, int minutos, int segundos) 
{
    const int SEGUNDOS_EN_UN_DIA = 86400;  
    const int SEGUNDOS_EN_UNA_HORA = 3600; 
    const int SEGUNDOS_EN_UN_MINUTO = 60;
    int totalSegundos = (dias * SEGUNDOS_EN_UN_DIA) +
                        (horas * SEGUNDOS_EN_UNA_HORA) +
                        (minutos * SEGUNDOS_EN_UN_MINUTO) +
                        segundos;

    return totalSegundos;
}
int main() 
{
    int dias, horas, minutos, segundos;
    cout << "Ingrese el número de días: ";
    cin >> dias;
    cout << "Ingrese el número de horas: ";
    cin >> horas;
    cout << "Ingrese el número de minutos: ";
    cin >> minutos;
    cout << "Ingrese el número de segundos: ";
    cin >> segundos;
    int totalSegundos = convertirASegundos(dias, horas, minutos, segundos);
    cout << "El total en segundos es: " << totalSegundos << endl;
    return 0;
}