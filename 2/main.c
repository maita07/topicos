#include <stdio.h>
#include <stdlib.h>

float sumatoriaDiagonalSuperior(float matriz[][5], int longitud);

int main()
{
    float matriz[5][5] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};


    return sumatoriaDiagonalSuperior(matriz, 5);
}


float sumatoriaDiagonalSuperior(float matriz[][5], int longitud)
{
    int i, j;
    float sumatoria;

    for(i = 0; i < longitud; i++)
    {
        for(j = longitud - 1; j > i; j--)
        {
            sumatoria += matriz[i][j];
        }
    }

    return sumatoria;
}
