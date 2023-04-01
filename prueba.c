#include <stdio.h>
#include <math.h>

double calculate_ex(int x, double tol) {
    double ex = 1.0;  // Inicializamos el resultado a 1
    double term = 1.0; // Inicializamos el primer término a 1
    int n = 1; // Inicializamos el índice de términos a 1

    while (fabs(term) > tol) { // Continuamos el bucle hasta que el término sea menor que la tolerancia
        term *= (double)x / n; // Calculamos el siguiente término en la serie
        ex += term; // Sumamos el término actual al resultado
        n++; // Incrementamos el índice de términos
    }

    return ex;
}

int main() {
    int x = 2;
    double tol = 1e-6; // Tolerancia de 1e-6

    double ex = calculate_ex(x, tol);
    printf("e^%d = %f\n", x, ex);

    return 0;
}
