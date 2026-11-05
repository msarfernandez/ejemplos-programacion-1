#include "lotes.h"

int main()
{

    /*
    El primer lote de carga contiene la información de las 15 categorías disponibles, donde cada registro contiene:
        - Número de categoría (enteros no correlativos)
        - Valor hora (número entero)*/
    int v_categoria[15];
    float v_valor_hora[15];
    cargar_categorias(v_categoria, v_valor_hora);
    /*
    El segundo lote de carga contiene los datos de los 30 empleados de la empresa:
        - Apellido y nombre (hasta 50 caracteres)
        - Número de empleado (entero de 4 cifras no correlativo)
        - Categoría (enteros no correlativos)*/
    string v_empleados[30];
    int v_nro_empleado[30];
    int v_categoria_empleado[30];

    cargar_empleados(v_empleados, v_nro_empleado, v_categoria_empleado);


    /*
    El lote de proceso registra las jornadas trabajadas durante el año, se presenta desordenado y finaliza con un registro con número de mes igual a 13:
        - Número de empleado (entero de 4 cifras no correlativo)
        - Número de mes (entero de 1 a 12)
        - Cantidad de horas trabajadas (número entero)
    */

    //PUNTO A: Listado por empleado con apellido, nombre y
    //          el detalle de lo cobrado individualmente
    int nro_empleado, mes, cantidad_horas;
    int indice_empleado;
    int nro_categoria_empleado;
    int indice_categoria;
    float precio_hora, monto_jornada;

    float v_punto_a[30] = {};
    float v_punto_b[15] = {};
    int v_punto_c[30] = {};

    cout << "Ingrese el nro de empleado: " << endl;
    cin >> nro_empleado;
    cout << "Ingrese el mes de trabajo: " << endl;
    cin >> mes;
    cout << "Ingrese las horas trabajadas: " << endl;
    cin >> cantidad_horas;
    while(mes != 13){

        //CALCULAR PUNTO A

        //necesito acumular el monto de la jornada
        //calcular el monto de la jornada >> cantidad de horas POR precio hora
        //buscar precio hora >> buscar categoria >> buscar el empleado

        //buscar empleado
        indice_empleado = buscar_empleado(nro_empleado, v_nro_empleado);

        //obtener categoria empleado
        nro_categoria_empleado = v_categoria_empleado[indice_empleado];

        //buscar categoria y su precio
        indice_categoria = buscar_categoria(nro_categoria_empleado, v_categoria);
        precio_hora = v_valor_hora[indice_categoria];

        monto_jornada = cantidad_horas * precio_hora;

        v_punto_a[indice_empleado] += monto_jornada;
        v_punto_c[indice_empleado] += cantidad_horas;

        //PUNTO B
        //Total abonado en sueldos discriminado por cada una de
        //  las 15 categorías.

        //CALCULAR PUNTO B
        v_punto_b[indice_categoria] += monto_jornada;



        cout << "Ingrese el nro de empleado: " << endl;
        cin >> nro_empleado;
        cout << "Ingrese el mes de trabajo: " << endl;
        cin >> mes;
        cout << "Ingrese las horas trabajadas: " << endl;
        cin >> cantidad_horas;
    }

    //MOSTRAR PUNTO A
    cout << endl << "LISTA DE EMPLEADOS Y SUELDOS: " << endl;
    for(int x = 0; x<30 ; x++){
        cout << "EMPLEADO: " << v_empleados[x] << " SUELDO: " << v_punto_a[x] << endl;

    }
    //MOSTRAR PUNTO B

    //MOSTRAR PUNTO C
    int v_indices[30], indice;
    ordenar_sueldos(v_punto_a, v_indices);

    cout << endl << "LISTADO ORDENADO: " << endl;
    for(int x=0;x<10;x++){
        indice = v_indices[x];
        cout << "EMPLEADO: " << v_empleados[indice];
        cout << " NRO EMPLEADO: " << v_nro_empleado[indice];
        cout << " HORAS TRABAJADAS: " << v_punto_c[indice];
        cout << " TOTAL ANUAL: " << v_punto_a[x] << endl;

    }


    return 0;
}
