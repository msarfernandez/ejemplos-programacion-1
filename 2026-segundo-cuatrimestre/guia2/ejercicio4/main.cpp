#include <iostream>

using namespace std;

int main()
{
    /*
    Hacer un programa para ingresar por teclado dos números y luego informar por
    pantalla la diferencia entre ambos.
    */

    //declarar
    int a, b, d;

    //ingresos
    cout << "Ingrese un nro: ";
    cin >> a;
    cout << "Ingrese otro: ";
    cin >> b;

    //proceso
    if(a > b)
        d = a - b;
    else
        d = b - a;

    //egresos
    cout << "La diferencia es: " << d << endl;



    return 0;
}
