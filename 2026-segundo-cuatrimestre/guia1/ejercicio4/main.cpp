#include <iostream>

using namespace std;

int main()
{
/*  Hacer un programa para ingresar por teclado la cantidad de asientos totales en
    un avión y la cantidad de pasajes ocupados y luego calcular e informar el
    porcentaje de ocupación y el porcentaje de no ocupación del mismo.
    Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el
    porcentaje de ocupación que se informará será de un 40% y el porcentaje de no
    ocupación será de un 60%.
*/
    //declarar
    int asientosTotales, asientosVendidos;
    float porcentajeVendido, porcentajeNoVendido;

    //ingresar
    cout << "Ingrese los asientos totales del avion: ";
    cin >> asientosTotales;
    cout << "Ingrese los asientos vendidos: ";
    cin >> asientosVendidos;

    //procesar
    porcentajeVendido = asientosVendidos * 100 / asientosTotales;
    porcentajeNoVendido = 100 - porcentajeVendido;

    int H = porcentajeNoVendido * (3 + porcentajeVendido);

    //egreso
    cout << "Porcentaje de asientos vendidos: " << porcentajeVendido << " %" << endl;
    cout << "Porcentaje de asientos NO vendidos: " << porcentajeNoVendido << " %" << endl;


    return 0;
}
