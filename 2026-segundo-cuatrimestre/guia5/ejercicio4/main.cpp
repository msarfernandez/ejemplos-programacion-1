#include <iostream>
#include "funciones.h"


/*
Hacer una función que reciba un número entero por valor llamado día y un
string llamado nombreDia por referencia y le asigne el nombre correspondiente
según el número de día. Siendo 0 es Domingo y 6 es Sábado.
*/

int main()
{
    int nroDia;
    string nombreDia;

    cout << "Ingrese el nro de dia (0 a 6): " << endl;
    cin >> nroDia;
    while(!(nroDia >=0 && nroDia <7)){
        cout << "EL VALOR INGRESADO ESTA FUERA DE RANGO." << endl;
        cout << "Ingrese el nro de dia (0 a 6): " << endl;
        cin >> nroDia;
    }

    DeterminarDia(nroDia, nombreDia);

    //el main muestra el dia
    cout << "El dia es: " << nombreDia << endl;


    return 0;
}
