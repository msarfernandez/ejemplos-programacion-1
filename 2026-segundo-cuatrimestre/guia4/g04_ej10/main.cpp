#include <iostream>

using namespace std;

int main()
{
    int nroSuc, dia, tipoVenta, formaPago;
    float importe;
    int nroSucAct;

    //variables punto a
    float recContado, recDebito, recCredito, porContado, porDebito, porCredito, totalRecaudado;
    //variables punto b
    float recObraSocial, porObraSocial, menorPorObraSocial;
    bool hayMenorObraSocial = false;
    int menorSucursalObraSocial;
    //variables punto c
    float mayor_1, mayor_2;
    bool primeraVenta, segundaVenta;
    //variables punto d
    bool hayMenorVentaPuntoD = false;
    float menorVentaPuntoD;
    int menorSucursalPuntoD, menorDiaPuntoD;

    // Primer Registro
    cout << "Sucursal: ";
    cin >> nroSuc;
    cout << "Dia: ";
    cin >> dia;
    cout << "Importe : $ ";
    cin >> importe;
    cout << "Tipo de Venta: ";
    cin >> tipoVenta;
    cout << "Forma de Pago: ";
    cin >> formaPago;

    cout << endl;

    while(nroSuc != 0)
    {
        // Clave de Agrupamiento
        nroSucAct = nroSuc;
        cout << "--------------------------" << endl;
        cout << "Sucursal que estamos trabajando: " << nroSucAct << endl;
        cout << "--------------------------" << endl;

        recDebito = 0;
        recCredito = 0;
        recContado = 0;
        recObraSocial = 0;
        primeraVenta = false;
        segundaVenta = false;

        while(nroSuc == nroSucAct)
        {
            // Procesando Registros de cada Sucursal
            //Punto A
            switch(formaPago){
            case 1:
                recDebito += importe;
                break;
            case 2:
                recCredito += importe;
                break;
            case 3:
                recContado += importe;
                break;
            }

            //Punto B
            if(tipoVenta == 2){
                recObraSocial += importe;
            }

            //Punto C
            if(!primeraVenta){
                mayor_1 = importe;
                primeraVenta = true;
            }else if(importe > mayor_1){
                mayor_2 = mayor_1;
                mayor_1 = importe;
                segundaVenta = true;
            }else if(!segundaVenta || importe > mayor_2){
                mayor_2 = importe;
                segundaVenta = true;
            }

            //Punto D
            if(!hayMenorVentaPuntoD || importe < menorVentaPuntoD){
                menorVentaPuntoD = importe;
                menorSucursalPuntoD = nroSucAct;
                menorDiaPuntoD = dia;
                hayMenorVentaPuntoD = true;
            }


            // Pedimos un nuevo Registro
            cout << "Sucursal: ";
            cin >> nroSuc;
            cout << "Dia: ";
            cin >> dia;
            cout << "Importe : $ ";
            cin >> importe;
            cout << "Tipo de Venta: ";
            cin >> tipoVenta;
            cout << "Forma de Pago: ";
            cin >> formaPago;
            cout << endl;

        }// cierre subgrupo while interno

        //calcular y mostrar punto a
        totalRecaudado = recContado + recCredito + recDebito;
        porContado = recContado * 100 / totalRecaudado;
        porCredito = recCredito * 100 / totalRecaudado;
        porDebito = recDebito * 100 / totalRecaudado;
        cout << "Porcentaje Rec. Contado: " << porContado << endl;
        cout << "Porcentaje Rec. Credito: " << porCredito << endl;
        cout << "Porcentaje Rec. Debito: " << porDebito << endl;

        //calculos punto b
        porObraSocial = recObraSocial * 100 / totalRecaudado;
        if(!hayMenorObraSocial || porObraSocial < menorPorObraSocial){
            menorPorObraSocial = porObraSocial;
            menorSucursalObraSocial = nroSucAct;
            hayMenorObraSocial = true;
        }

        //mostrar punto c
        cout << "Mayores suc: " << nroSucAct << endl;
        cout << "primera y segunda venta de mayor importe: " << mayor_1 << ", " << mayor_2 << endl;

    }//Cierre total del lote. While externo.

    //mostrar punto b
    cout << "El menor porcentaje de rec. obra social es: " << menorPorObraSocial
            << " en la suc: " << menorSucursalObraSocial << endl;

    //mostrar punto d
    cout << "La menor venta es de: ARS " << menorVentaPuntoD << ", en la suc: " << menorSucursalPuntoD <<
        " y se realizo el dia: " << menorDiaPuntoD << endl;


    return 0;
}
