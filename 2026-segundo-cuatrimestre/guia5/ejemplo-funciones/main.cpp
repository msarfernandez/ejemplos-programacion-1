#include <iostream>

using namespace std;

int mayor(int &N, int b){
    //ALCANCE
    //SCOPE
    //DIMENSIONES
    //cout << "Resolviendo desde la funcion..." << endl;
    int c;
    if(N>b){
        c = N;
    }else{
        c = b;
    }
    N = 99;
    return c;
}









int main()
{
    int a, b, may;
    cin >> a;
    cin >> b;

    may = mayor(a, b);


    cout << "El mayor es: " << may << endl;
    cout << "Los valores eran: a=" << a << ", b=" << b << endl;

    return 0;
}






