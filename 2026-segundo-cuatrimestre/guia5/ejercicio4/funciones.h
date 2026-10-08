#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <string.h>
using namespace std;
//declaro funcion determinarDia();
void DeterminarDia(int dia, string &nombreDia){
    switch(dia){
        case 0:
            nombreDia = "Domingo";
            break;
        case 1:
            nombreDia = "Lunes";
            break;
        case 2:
            nombreDia = "Martes";
            break;
        case 3:
            nombreDia = "Miercoles";
            break;
        case 4:
            nombreDia = "Jueves";
            break;
        case 5:
            nombreDia = "Viernes";
            break;
        case 6:
            nombreDia = "Sabado";
            break;
        default:
            nombreDia = "Opcion incorrecta";
    }
}



#endif // FUNCIONES_H_INCLUDED



