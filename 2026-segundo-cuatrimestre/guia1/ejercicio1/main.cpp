#include <iostream>

using namespace std;

int main()
{
    //declarar variables
    float horasTrabajadas, valorHora, sueldo, horasVacacionesPendientes, horasVacacionesPagas;

    //ingreso de datos
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "Ingrese el valor por hora: ";
    cin >> valorHora;

    //proceso
    sueldo = horasTrabajadas * valorHora;


    //mostrar en pantalla
    cout << "El sueldo a pagar es: " << sueldo << endl;





    return 0;
}
