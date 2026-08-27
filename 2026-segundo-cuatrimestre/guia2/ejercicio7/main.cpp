#include <iostream>

using namespace std;

int main()
{
    /*
    Hacer un programa para ingresar cuatro números y
    listar el máximo de ellos.
    */
    int a, b, c, d, mayor;

    cout << "Ingrese un nro: ";
    cin >> a;

    cout << "Ingrese otro: ";
    cin >> b;

    cout << "Ingrese otro: ";
    cin >> c;

    cout << "Ingrese otro: ";
    cin >> d;

    mayor = a;

    if(b >= mayor){
        mayor = b;
    }


    if(c >= mayor)
        mayor = c;

    if(d >= mayor)
        mayor = d;

    cout << "El mayor es: " << mayor << endl;

    return 0;
}
