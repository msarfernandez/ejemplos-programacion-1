#include <iostream>

using namespace std;

int main()
{

    /*
    Se dispone de una lista de 10 grupos de números y cada uno de los grupos
    estará compuesto por 5 números. Se pide determinar e informar:
    a) Para cada uno de los 10 grupos la cantidad de números positivos, negativos
    y ceros que lo componen. Se informan 3 resultados para cada uno de los 10
    grupos.
    b) Para cada uno de los 10 grupos el último número impar y en qué orden
    apareció en ese grupo, si en un grupo no hubiera números impares informar
    con un cartel aclaratorio. Se informan 2 resultados para cada uno de los 10
    grupos.
    c) Informar cuántos números impares hay en total entre los 10 grupos. Se
    informa un resultado al final de todo, es decir no debe informar resultados
    grupo por grupo

    */

    //****** SOLO RESUELTO EL PUNTO A. EL RESTO DE TAREA **********

    int n, pos, neg, cero;

    //-2, 0, 0, 1, 2
    //0, 0, 0, 0, 0
    //-1, -1, 0, 1, 1


    for(int x = 0; x < 3; x++){
        //GRUPOS
        pos = 0;
        neg = 0;
        cero = 0;

        for(int y = 0; y < 5; y++){
            cout << "Ingrese un nro: ";
            cin >> n;

            if(n>0){
                pos++;
            }else if(n<0){
                neg++;
            }else{
                cero++;
            }

        }//fin sublote o grupo
        cout << "GRUPO: " << x + 1 << endl;
        cout << "La cantidad de positivos es: " << pos << endl;
        cout << "La cantidad de negativos es: " << neg << endl;
        cout << "La cantidad de ceros es: " << cero << endl;


    }

    return 0;
}
