#include <iostream>

using namespace std;

int main()
{

    int n;
    int acu;
    int con = 0;

    for(int y = 0; y < 5; y++){

        cout << "Ingrese un nro: " << endl;
        cin >> n;
        acu = 0;

        for(int x = 1; x < n; x++){
            if(n%x == 0){
                acu += x;
            }
        }

        if(acu == n){
            con++;
        }

    }// salida for externo

    cout << "La cantidad de perfectos es: " << con << endl;


    return 0;
}
