#include <iostream>

using namespace std;

/*
Hacer una función que reciba un número entero por valor llamado día y un
string llamado nombreDia por referencia y le asigne el nombre correspondiente
según el número de día. Siendo 0 es Domingo y 6 es Sábado.
*/

//declaro funcion determinarDia();
void DeterminarDia(int dia, string &nombreDia){
    switch(dia){
        case 0:
            nombreDia = "Domingo";
            break;
        case 1:
            nombreDia = "Lunes";
            break;
        case 2:
            nombreDia = "Martes";
            break;
        case 3:
            nombreDia = "Miercoles";
            break;
        case 4:
            nombreDia = "Jueves";
            break;
        case 5:
            nombreDia = "Viernes";
            break;
        case 6:
            nombreDia = "Sabado";
            break;
        default:
            nombreDia = "Opcion incorrecta";
    }
}

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
