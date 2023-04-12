#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"


////////////////////////////////////////////////////////////////////////////////////////////////


void imprimir_vector(int *vec, int ce)
{
    int i;

    for(i = 0; i < ce; i++)
    {
        printf("%d ", *vec);
        vec++;
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////


int insertar_elemento(int *vec, int elemento, int posicion, int cantidad_elementos)
{
    int i;
    cantidad_elementos++;

    for(i = cantidad_elementos; i > posicion; i--)
    {
        *(vec + i) = *(vec + i - 1);
    }

    *(vec + posicion) = elemento;

    return cantidad_elementos;
}


////////////////////////////////////////////////////////////////////////////////////////////////


void orden_burbujeo(int *vec, int cantidad_elementos)
{
    int i = 0;
    int aux;
    while(i < cantidad_elementos - 1)
    {
        if(*(vec + i) > *(vec + i + 1) && i >= 0)
        {
            aux = *(vec + i);
            *(vec + i) = *(vec + i + 1);
            *(vec + i + 1) = aux;
            i--;
        }
        else
        {
            i++;
        }
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////


int insertar_elemento_ordenando(int *vec, int elemento, int cantidad_elementos)
{
    cantidad_elementos++;

    *(vec + cantidad_elementos - 1) = elemento;

    orden_burbujeo(vec, cantidad_elementos);

    return cantidad_elementos;
}


////////////////////////////////////////////////////////////////////////////////////////////////


int eliminar_elemento(int *vec, int posicion, int cantidad_elementos)
{
    int i;
    for(i = posicion; i < cantidad_elementos - 1; i++)
    {
        *(vec + i) = *(vec + i + 1);
    }

    *(vec + cantidad_elementos - 1) = 0;

    return cantidad_elementos - 1;
}


////////////////////////////////////////////////////////////////////////////////////////////////


int eliminar_un_elemento_determinado(int *vec, int elemento, int cantidad_elementos)
{
    int i = 0;
    int detector_eliminacion = 0;

    do{
        if(*(vec + i) == elemento)
        {
            cantidad_elementos = eliminar_elemento(vec, i, cantidad_elementos);
            detector_eliminacion = 1;
        }

        i++;
    }while(detector_eliminacion == 0 && i < cantidad_elementos);

    return cantidad_elementos;
}


////////////////////////////////////////////////////////////////////////////////////////////////


int eliminar_elemento_determinado_repetido(int *vec, int elemento, int cantidad_elementos)
{

    int i = cantidad_elementos - 1;

    do{
        if(*(vec + i) == elemento)
        {
            cantidad_elementos = eliminar_elemento(vec, i, cantidad_elementos);
        }
        i--;
    }while(i >= 0);

    return cantidad_elementos;
}


