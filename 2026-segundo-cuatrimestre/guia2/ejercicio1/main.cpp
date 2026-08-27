#include <iostream>

using namespace std;

int main()
{
    /*
    Hacer un programa para ingresar por teclado un número y luego emitir por
    pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
    Importante: Verifique que el programa emita UN SOLO CARTEL.
    */
    int n;

    cout << "Ingrese un nro: ";
    cin >> n;

    if(n > 0){
        cout << "Es POSITIVO" << endl;
    }else if(n < 0){
        cout << "Es NEGATIVO" << endl;
    }else{
        cout << "Es CERO" << endl;
    }







    return 0;
}
