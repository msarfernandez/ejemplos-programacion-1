#include <iostream>

using namespace std;

int main()
{

    //declaracion
    int j = 0, n;

    //ingreso
    cout << "Ingrese un nro: ";
    cin >> n;

    //proceso
    while(n != 0){
        if(n > 0){
            j++;
        }
        cout << "Ingrese otro nro: ";
        cin >> n;
    }

    //egreso
    cout << "La cantidad de positivos es: " << j << endl;




    return 0;
}
