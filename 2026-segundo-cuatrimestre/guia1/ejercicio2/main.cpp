#include <iostream>

using namespace std;

int main()
{
    //declaración variables
    int a, b, c;

    //ingreso
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;

    //proceso
    c = b;
    b = a;
    a = c;

    //egreso
    cout << endl << "El contenido de A es: " << a << endl;
    cout << "El contenido de B es: " << b << endl;





    return 0;
}
