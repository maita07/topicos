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

    if(a < 0){
        printf("numero no valido");
        system("pause");
        exit(1);
    }
    else
    {
        while(VALOR_ABSOLUTO(Ri - R1) >= tol)
        {
            R1 = Ri;
            Ri = 1.0 / 2.0 * (R1 + (a / R1));
        }
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


double seno(double x, double tol)
{
    int poten = 3;
    int facto = 3;
    int signo = 1;

    double operador = x - (potencia(x,poten) / factorial(facto));
    double seno = operador;

    while (VALOR_ABSOLUTO(operador) > tol)
    {
        poten = poten + 2;
        facto = facto + 2;

        operador = signo == 1 ? potencia(x,poten) / factorial(facto) : -potencia(x,poten) / factorial(facto);

        seno += operador;

        signo = signo == 1 ? 0 : 1;
    }

    return seno;
}


//////////////////////////////////////////////////////////////////////////////


void deficiente_perfecto_abundante(int num)
{
    int divisores = 1;
    int sumatoria_divisores = 0;

    if(num > 0)
    {
        for(divisores = 1; divisores < num; divisores++)
        {
            if(num % divisores == 0)
            {
                sumatoria_divisores += divisores;
            }
        }
        sumatoria_divisores == num ? printf("PERFECTO") : sumatoria_divisores > num ? printf("ABUNDANTE") : printf("DEFICIENTE");
    }
    else
    {
        printf("\nNUMERO NO VALIDO");
        exit(1);
    }
}


//////////////////////////////////////////////////////////////////////////////


int producto_por_sumas_sucesivas(int num1, int num2)
{
    int resultado, contador;
    for(contador = 0; contador < num2; contador++)
    {
        resultado += num1;
    }
    return resultado;
}

//////////////////////////////////////////////////////////////////////////////


void cociente_resto(int num1, int num2)
{
    int resto;
    int cociente_entero;

    if(num2 == 0)
    {
        printf("\nDivisor no valido.\n");
        system("pause");
        exit(1);
    }
    else
    {
        resto = num1 % num2;
        cociente_entero = num1 / num2;
    }

    printf("\nResto de %d / %d = %d", num1, num2, resto);
    printf("\nCociente entero de %d / %d = %d", num1, num2, cociente_entero);

}


//////////////////////////////////////////////////////////////////////////////


int sumatoria_numeros_naturales(int num)
{
    int contador, sumador = 0;

    if(num < 0)
    {
        printf("\nNumero no valido.\n");
        system("pause");
        exit(1);
    }
    else
    {
        for(contador = 1; contador <= num; contador++)
        {
            sumador += contador;
        }
    }
    return sumador;
}


//////////////////////////////////////////////////////////////////////////////


int sumatoria_numeros_pares_naturales(int num)
{
    int contador, sumador = 0;

    if(num < 0)
    {
        printf("\nNumero no valido.\n");
        system("pause");
        exit(1);
    }
    else
    {
        for(contador = 1; contador <= num; contador++)
        {
            sumador += contador % 2 == 0 ? contador : 0;
        }
    }
    return sumador;
}


//////////////////////////////////////////////////////////////////////////////


int sumatoria_numeros_naturales_menores_que_n(int num)
{
    int contador, sumador = 0;

    if(num < 0)
    {
        printf("\nNumero no valido.\n");
        system("pause");
        exit(1);
    }
    else
    {
        for(contador = 1; contador < num; contador++)
        {
            sumador += contador;
        }
    }
    return sumador;
}


//////////////////////////////////////////////////////////////////////////////


int primo(int num)
{
    int contador = 0;
    int evaluador;
    int verificador;

    if(num <= 0)
    {
        printf("\nNumero no valido.\n");
        system("pause");
        exit(1);
    }
    else
    {
        for(evaluador = 1; evaluador <= num; evaluador++)
        {
            contador += num % evaluador == 0 ? 1 : 0;
        }
        verificador = contador <= 2 ? 1 : 0;
    }
    return verificador;
}















