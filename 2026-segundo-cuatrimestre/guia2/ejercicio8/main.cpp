#include <iostream>

using namespace std;

int main()
{
    /*
    Hacer un programa para ingresar cinco números y listar cuantos de esos cinco
    números son positivos, cuantos son negativos y cuantos son iguales a 0.
    */
    int n;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    cout << "Ingrese un nro: ";
    cin >> n;

    if(n > 0){
        positivos++;
    }else if(n < 0){
        negativos++;
    }else{
        ceros++;
    }

    cout << "Cantidad Positivos: " << positivos << endl;
    cout << "Cantidad Negativos: " << negativos << endl;
    cout << "Cantidad Ceros: " << ceros << endl;


    cout << "Ingrese un nro: ";
    cin >> n;

    if(n > 0){
        positivos++;
    }else if(n < 0){
        negativos++;
    }else{
        ceros++;
    }

    cout << "Ingrese un nro: ";
    cin >> n;

    if(n > 0){
        positivos++;
    }else if(n < 0){
        negativos++;
    }else{
        ceros++;
    }

    cout << "Ingrese un nro: ";
    cin >> n;

    if(n > 0){
        positivos++;
    }else if(n < 0){
        negativos++;
    }else{
        ceros++;
    }

    cout << "Ingrese un nro: ";
    cin >> n;

    if(n > 0){
        positivos++;
    }else if(n < 0){
        negativos++;
    }else{
        ceros++;
    }

    cout << "Cantidad Positivos: " << positivos << endl;
    cout << "Cantidad Negativos: " << negativos << endl;
    cout << "Cantidad Ceros: " << ceros << endl;


    return 0;
}
