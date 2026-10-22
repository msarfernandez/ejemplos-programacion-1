#include "funciones.h";

int main()
{
    int numeros[10];
    int promedio;

    cargar_vector(numeros);
    promedio = calcular_promedio(numeros);

    cout << "El promedio es: " << promedio << endl;

    buscar_mayores(promedio, numeros);

    return 0;
}
