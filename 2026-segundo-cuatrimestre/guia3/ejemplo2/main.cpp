#include <iostream>

using namespace std;

int main()
{
    //WHILE
    int n, mayor, contador = 0;
    cout << "Ingrese un nro (corta con cero): ";
    cin >> n;
    mayor = n;

    while(n != 0){
        contador++;

        if(n > mayor)
            mayor = n;

        cout << "Ingrese otro: ";
        cin >> n;
    }

    cout << endl << "Ingresaste " << contador << " nros. " << endl;
    cout << "El mayor es: " << mayor << endl;

    return 0;
}
