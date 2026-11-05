#ifndef LOTES_H_INCLUDED
#define LOTES_H_INCLUDED

#include <iostream>

using namespace std;

void cargar_categorias(int v_codigos[15], float v_precios[15]){
    int nro_categoria;
    float valor_hora;

    for(int x=0; x<15; x++){
        cout << "Ingrese el nro de categoria: " << endl;
        cin >> nro_categoria;
        v_codigos[x] = nro_categoria;

        cout << "Ingrese el valor hora: " << endl;
        cin >> valor_hora;
        v_precios[x] = valor_hora;
    }
}

void cargar_empleados(string nombres[], int nros_empleado[], int categorias_empleado[]){
    string nombre_empleado;
    int nro_empleado;
    int cat_empleado;
    for(int x = 0; x<30; x++){
        cout << "Ingrese el apellido y nombre del empleado: " << endl;
        getline(cin, nombre_empleado);
        cin.ignore();
        //cin.getline(nombre_empleado);
        nombres[x] = nombre_empleado;
        cout << "Ingrese nro empleado: " << endl;
        cin >> nro_empleado;
        nros_empleado[x] = nro_empleado;
        cout << "Ingrese categoria empleado (1 a 15): " << endl;
        cin >> cat_empleado;
        categorias_empleado[x] = cat_empleado;

    }
}

int buscar_empleado(int nro_empleado, int v_nro_empleado[]){
    for(int x = 0; x < 30; x++){
        if(nro_empleado == v_nro_empleado[x]){
            return x;
        }
    }
    return -1;
}

int buscar_categoria(int nro_categoria_empleado, int v_categoria[]){
    for(int x = 0; x<15; x++){
        if(nro_categoria_empleado == v_categoria[x]){
            return x;
        }
    }
    return -1;
}

int buscar(int codigo, int v_codigos[], int cantidad){
    for(int x = 0; x < cantidad; x++){
        if(codigo == v_codigos[x]){
            return x;
        }
    }
    return -1;
}


#endif // LOTES_H_INCLUDED
