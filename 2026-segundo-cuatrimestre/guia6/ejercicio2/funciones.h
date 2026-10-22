#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>

using namespace std;

void cargar_vector(int v[10]){
    int n;
    for(int x=0; x<10; x++){
        cout << "Ingrese un nro: " << endl;
        cin >> n;
        v[x] = n;
    }
}


int calcular_promedio(int v[10]){
    int suma = 0, p;
    for(int x=0; x<10; x++){
        suma+=v[x];
    }
    p = suma/10;
    return p;
}

void buscar_mayores(int p, int v[10]){
    for(int x=0; x<10; x++){
        if(v[x] > p){
            cout << "El elemento " << v[x] << " es mayor al promedio. " << endl;
        }
    }
}



#endif // FUNCIONES_H_INCLUDED
