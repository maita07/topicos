#include <stdio.h>
#include <stdlib.h>
#include "../librerias/vectores/vectores.h"

int main()
{
    int vector[10] = {1,2,3,4,5};
    int cantidad_elementos = 5;

    cantidad_elementos = insertar_elemento(vector, 1, 3, cantidad_elementos);

    imprimir_vector(vector, cantidad_elementos);

    return 0;
}
