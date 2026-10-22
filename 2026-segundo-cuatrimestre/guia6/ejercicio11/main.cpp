#include <iostream>

using namespace std;

float buscar_precio(int pago, int plan, int codigos[], float precios_contado[], float precios_tarjeta[]){
    //buscar el plan en el vector de planes, de codigos de planes
    for(int x=0; x<20; x++){
        if(plan == codigos[x]){
            //acá encontré el plan.
            //X es el indice donde encontré el código de plan.
            if(pago ==1){
                return precios_contado[x];
            }else{
                return precios_tarjeta[x];
            }
        }
    }
}

int main()
{

    //variables lote de proceso: ventas.
    int nroLocal, codigoPlan, cantidad, codigoPago;

    //20 PLANES DE TURISMO
        //Codigo
        //Precio Contado
        //Precio Tarjeta
    int codigo;
    float precioContado, precioTarjeta;

    int v_codigos[20];
    float v_precios_contado[20];
    float v_precios_tarjeta[20];

    for(int x=0; x<20; x++){
        cout << "Ingrese el codigo de plan: " << endl;
        cin >> codigo;
        cout << "Ingrese el precio contado: " << endl;
        cin >> precioContado;
        cout << "Ingrese el precio tarjeta: " << endl;
        cin >> precioTarjeta;

        v_codigos[x] = codigo;
        v_precios_contado[x] = precioContado;
        v_precios_tarjeta[x] = precioTarjeta;
    }

    //SEGUNDO LOTE: VENTAS.
    //Cantidad indefinida >> corta con NroLocal 9
        //Nro Local
        //Codigo Plan Turismo
        //Cantidad personas
        //Codigo Pago (1 contado, 2 tarjeta)

    float recaudacionTotal = 0;

    cout << "Ingrese el nro de local: " << endl;
    cin >> nroLocal;

    while(nroLocal !=9){
        cout << "Ingrese el nro de plan: " << endl;
        cin >> codigoPlan;
        cout << "Ingrese la cantidad de pasajeros: " << endl;
        cin >> cantidad;
        cout << "Ingrese la forma de pago: 1-contado, 2-tarjeta: " << endl;
        cin >> codigoPago;

        //acá procesamos

        //acumulo recaudacion total:
        //con el codigo de plan y el codigo de pago
        //averiguo el precio correspondiente.
        float precio = buscar_precio(codigoPago, codigoPlan, v_codigos, v_precios_contado, v_precios_tarjeta);

        recaudacionTotal += precio*cantidad;

        //acá pedimos nuevo registro
        cout << "Ingrese el nro de local: " << endl;
        cin >> nroLocal;
    }

    return 0;
}
