#include <iostream>

using namespace std;

int main()
{
    //declaraciones
    int numeroCliente, sucursal;
    float saldo, porcentaje1;
    int conSucursal1 = 0, con20Sucursal1 = 0;


    //ingreso
    cout << "Ingrese el nro de cliente: ";
    cin >> numeroCliente;
    cout << "Ingrese la sucursal del cliente: ";
    cin >> sucursal;
    cout << "Ingrese el saldo del cliente: ";
    cin >> saldo;


    //proceso
    while(sucursal != 10){

        if(sucursal == 1){
            conSucursal1++;
            if(saldo >= 20000){
                con20Sucursal1++;
            }
        }else if(sucursal == 2){

            //asda

        }


        cout << "Ingrese el nro de cliente: ";
        cin >> numeroCliente;
        cout << "Ingrese la sucursal del cliente: ";
        cin >> sucursal;
        cout << "Ingrese el saldo del cliente: ";
        cin >> saldo;

    }// final del while del lote

    porcentaje1 = (float)con20Sucursal1 * 100 / (conSucursal1);

    //egreso

    cout << "El porcentaje sucursal 1 es: " << porcentaje1 << endl;




    return 0;
}
