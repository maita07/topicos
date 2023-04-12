#include <stdio.h>
#include <stdlib.h>
#include "../librerias/vectores/vectores.h"
int main()
{
    int vec[10] = {3,3,1,2,3,3,3};
    int cantidad_elementos = 7;

    cantidad_elementos = eliminar_elemento_determinado_repetido(vec, 3, cantidad_elementos);

    imprimir_vector(vec, cantidad_elementos);

    return 0;
}
