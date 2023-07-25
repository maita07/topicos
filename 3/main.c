#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

#define ABSOLUTO(x) ((x) < 0 ? -(x) : (x))



double factorial(int n);
float raizCuadradaDeA(int a, float tol);
int perteneceFibo(int n);

int main(void)
{
    float raiz = raizCuadradaDeA(2, 0.00001);
    printf("\n%d\n\n", ABSOLUTO(-4));
    printf("\n%.9f\n\n", raiz);



    return perteneceFibo(21);
}


double factorial(int n)
{
    int multiplicador;
    for(multiplicador = n-1; multiplicador > 1; multiplicador--)
    {
        n*=multiplicador;
    }

    return n;
}

float raizCuadradaDeA(int a, float tol)
{
    float R1 = 1;
    float Ri = 0.5 * (R1 + (a/R1));

    while(ABSOLUTO(R1-Ri) > tol)
    {
        R1 = Ri;
        Ri = 0.5 * (R1 + (a/R1));
    }

    return Ri;
}

int perteneceFibo(int n)
{
    int n1 = 0, n2 = 1, n3;

    if(n == 1)
        return 1;

    while((n1 + n2) < n)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    if(n1 + n2 == n)
    {
        return 1;
    }
    else{return 0;}
}
