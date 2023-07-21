#include <stdio.h>
#include <stdlib.h>

double factorial(int n);
unsigned long long int combinatorio(int n, int r);
double calcularEx(int x, double tol);

int main()
{
    printf("%lf", calcularEx(5, 0.00000000000000000001));
    return 0;
}


double factorial(int n)
{
    if(n == 1)
    {
        return n;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

unsigned long long int combinatorio(int n, int r)
{

    if (r == 0 || r == n)
    {
        return 1;
    }

    if (r > n - r)
    {
        r = n - r; // Optimización para reducir el número de multiplicaciones
    }

    return combinatorio(n - 1, r - 1) * n / r;
}


double calcularEx(int x, double tol)
{
    float divisor = 1;
    int multiplicador = 1;
    int exponente = x;
    double resultado = 0, termino;

    do
    {
        termino = (float)x/divisor;
        resultado += termino;
        x*=exponente;
        multiplicador++;
        divisor *= multiplicador;
    }
    while(termino > tol);

    return resultado;
}
