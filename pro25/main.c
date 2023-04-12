#include <stdio.h>
#include <stdlib.h>
#include "../librerias/vectores/vectores.h"

int main()
{
    int vec[10] = {1,2,3,4,3};
    int cantidad_elementos = 5;

    cantidad_elementos = eliminar_un_elemento_determinado(vec, 3, cantidad_elementos);

    imprimir_vector(vec, cantidad_elementos);

    return 0;
}
