#include <iostream>

using namespace std;

int main()
{
    int n, positivos = 0, negativos = 0, ceros = 0;

    //CICLOS
    for(int x = 0; x < 25; x++){

        cout << "Ingrese un nro: ";
        cin >> n;

        if(n > 0){
            positivos++;
        }else if(n < 0){
            negativos++;
        }else{
            ceros++;
        }

    }

    cout << "Cantidad Positivos: " << positivos << endl;
    cout << "Cantidad Negativos: " << negativos << endl;
    cout << "Cantidad Ceros: " << ceros << endl;


    return 0;
}
