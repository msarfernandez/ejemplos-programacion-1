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

    int n, pos, neg, cero, orden, impar, con_impar = 0;

    //-2, 0, 0, 1, 2
    //0, 0, 0, 0, 0
    //-1, -1, 0, 1, 1


    for(int x = 0; x < 3; x++){
        //GRUPOS
        pos = 0;
        neg = 0;
        cero = 0;
        orden = 0;

        for(int y = 0; y < 5; y++){
            cout << "Ingrese un nro: ";
            cin >> n;

            //PUNTO A
            if(n>0){
                pos++;
            }else if(n<0){
                neg++;
            }else{
                cero++;
            }

            //PUNTO B
            if(n%2 != 0){
                impar = n;
                orden = y + 1;

                //PUNTO C
                con_impar++;
            }


        }//fin sublote o grupo


        // PUNTO A
        cout << "GRUPO: " << x + 1 << endl;
        cout << "La cantidad de positivos es: " << pos << endl;
        cout << "La cantidad de negativos es: " << neg << endl;
        cout << "La cantidad de ceros es: " << cero << endl;

        //PUNTO B
        if(orden != 0){
            cout << "El ultimo impar encontrado es: " << impar << endl;
            cout << "Y fue encontrado en la posicion: " << orden << endl;
        }else{
            cout << "Grupo sin impares. " << endl;
        }


    }// cierre for externo

    //PUNTO C
    cout << "La cantidad de impares totales es: " << con_impar << endl;



    return 0;
}
