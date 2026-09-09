#include <iostream>

using namespace std;

int main()
{
    // 0, 5, -2, 0, 0, 0, 0, 4, -3, 9, 8
    int n, ant = -1, ceros = 0, ternas = 0;

    cout << "Ingrese un nro: ";
    cin >> n;

    while(!(n > 0 && ant > 0)){

        if(n == 0){
            ceros++;
            if(ceros == 3){
                ternas++;
                ceros--;
            }
        }else{
            ceros = 0;
        }

        ant = n;
        cout << "Ingrese otro nro: ";
        cin >> n;

    }// fin del ciclo

    cout << "La cantidad de ternas de ceros es: " << ternas << endl;




    return 0;
}
