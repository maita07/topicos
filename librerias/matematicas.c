#include <stdio.h>
#include <stdlib.h>
#include "matematicas.h"
#include "macros.h"


//////////////////////////////////////////////////////////////////////////////


double factorial(int numero)
{
    double fact;

    if(numero == 0){
        fact = 1;
    }
    else
    {
        for(fact=numero, numero--; numero>1; --numero)
        {
            fact *= numero;
        }
    }

    return fact;
}


//////////////////////////////////////////////////////////////////////////////


int combinatorio(int num1, int num2)
{
    int resultado;

    if(num1>=num2&&num2>0)
    {
        resultado=(factorial(num1)/(factorial(num2)*factorial(num1-num2)));
        return resultado;
    }else{
        printf("Los numeros ingresados no son válidos\n");
        system("pause");
        exit (1);
    }
}


//////////////////////////////////////////////////////////////////////////////


double potencia(double base, int exponente)
{
    double resultado = 1;
    int i;

    for (i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}


//////////////////////////////////////////////////////////////////////////////


double calcular_ex(double x, double tol) {
    double ex = 1.0; // Inicializar ex en 1, el primer término de la serie
    int exp = 1;
    double termino_actual = 1.0; // Inicializar el primer término en 1, para empezar la serie
    int n = 1; // n es el índice del término actual de la serie

    while (termino_actual >= tol) {
        termino_actual = (potencia(x,exp)/factorial(n)); // Calcular el siguiente término de la serie
        ex += termino_actual; // Sumar el siguiente término a ex
        n++; // Incrementar el índice del término actual
        exp++;
    }

    return ex;
}


//////////////////////////////////////////////////////////////////////////////


double raiz_cuadrada(double a, double tol)
{
    double R1 = 1.0;
    double Ri = 1.0 / 2.0 * (R1 + (a / R1));

    while(VALOR_ABSOLUTO(Ri - R1) >= tol)
    {
        R1 = Ri;
        Ri = 1.0 / 2.0 * (R1 + (a / R1));
    }

    return Ri;
}


//////////////////////////////////////////////////////////////////////////////


int num_fibonacci(int num)
{
    int term_1 = 1;
    int term_2 = 2;
    int term_evaluador = 2;

    if(num == 1)
        return 1;

    while(num > term_evaluador)
    {
        term_evaluador = term_1 + term_2;
        term_1 = term_2;
        term_2 = term_evaluador;
    }

   if(num == term_evaluador)
    return 1;
        else
            return 0;
}


//////////////////////////////////////////////////////////////////////////////



