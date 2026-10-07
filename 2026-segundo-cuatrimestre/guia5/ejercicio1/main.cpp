#include <iostream>

using namespace std;

bool EsPar(int);

int main()
{
    int n;
    //bool PAR;

    cout << "Ingrese un nro: " << endl;
    cin >> n;

    //PAR = EsPar(n);

    if(EsPar(n)){
        cout << "El nro es par." << endl;
    }else{
        cout << "El nro es impar. " << endl;
    }


    return 0;
}


/* la forma comun de hacer el if de la funcion
    if(nro%2 == 0)
        return true;
    else
        return false;
*/


bool EsPar(int nro){
    return (nro%2 == 0);
}
