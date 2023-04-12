#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[10] = {3,4,2,5,1};
    int cantidad_elementos = 5;

    cantidad_elementos = insertar_elemento_ordenando(vector, 0, cantidad_elementos);

    imprimir_vector(vector, cantidad_elementos);

    return 0;
}
